#include <stdio.h>

int main(void) {
    FILE *pArquivo = NULL;
    pArquivo = fopen("nomeLivro.txt", "r");

    if (pArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char destino[80];
    int contador = 1;

    while (fgets(destino, 80, pArquivo) != NULL) {
        printf("Nome %d: %s", contador, destino);
        contador++;
    }

    printf("\n");

    fclose(pArquivo);
    return 0;
}
