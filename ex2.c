#include <stdio.h>
#include <string.h>

int main() {
    char tituloLivro[50];
    char personagemDoLivro[50];
    char continuar;

    printf("Digite o título do livro [Sem espaços]: ");
    scanf("%49s", tituloLivro);

    FILE *arquivo = fopen(tituloLivro, "a");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    do {
        printf("Digite o nome do personagem do livro [Sem espaços]: ");
        scanf("%49s", personagemDoLivro);
        fprintf(arquivo, "%s\n", personagemDoLivro);

        printf("Deseja adicionar outro personagem? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    fclose(arquivo);
    printf("Todos os personagens foram salvos em %s\n", tituloLivro);
    return 0;
}
