#include <stdio.h>

int main() {
    char titulo[50];
    char personagem[50];
    char escolha;

    printf("Digite o título do livro [sem espaços]: ");
    scanf("%49s", titulo);

    FILE *arquivo = fopen(titulo, "r");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return 1;
    }

    while (fgets(personagem, 50, arquivo) != NULL) {
        printf("Personagem: %s", personagem);
        printf("Digite [P] para próximo ou [F] para finalizar: ");
        scanf(" %c", &escolha);

        if (escolha == 'F' || escolha == 'f') {
            break;
        }
    }

    fclose(arquivo);
    printf("Leitura encerrada.\n");
    return 0;
}
