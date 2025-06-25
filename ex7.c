#include <stdio.h>
#include <stdlib.h>

struct filme {
    char titulo[50];
    int ano;
    int duracao;
};

int main(void) {
    struct filme f;

    FILE *arquivo = fopen("filmes.txt", "rb");
    if (arquivo == NULL) {
        printf("Arquivo filmes.txt não encontrado.\n");
        return 1;
    }

    printf("Filmes gravados:\n\n");

    while (fread(&f, sizeof(struct filme), 1, arquivo) == 1) {
        printf("Título: %s\n", f.titulo);
        printf("Ano: %d\n", f.ano);
        printf("Duração: %d minutos\n", f.duracao);
        printf("--------------------------\n");
    }

    fclose(arquivo);
    return 0;
}
