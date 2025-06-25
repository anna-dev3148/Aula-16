#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo = fopen("remedios.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return 1;
    }

    char linha[100];
    char ultima[100];

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        strcpy(ultima, linha);
    }

    fclose(arquivo);
    printf("Última: %s", ultima);
    return 0;
}
