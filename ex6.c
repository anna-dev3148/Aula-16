#include <stdio.h>
#include <stdlib.h>

struct filme {
    char titulo[50];
    int ano;
    int duracao;
};

int main(void) {
    struct filme f;

    printf("Digite o título do filme: ");
    scanf(" %49[^\n]", f.titulo);

    printf("Digite o ano do filme: ");
    scanf("%d", &f.ano);

    printf("Digite a duração (em minutos): ");
    scanf("%d", &f.duracao);
  
    FILE *arquivo = fopen("filmes.txt", "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fwrite(&f, sizeof(struct filme), 1, arquivo);
    fclose(arquivo);

    printf("Filme salvo com sucesso no arquivo filmes.txt!\n");
    return 0;
}
