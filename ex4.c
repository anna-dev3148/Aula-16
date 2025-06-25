#include <stdio.h>

int main() {
    char data[20], hora[10];

    printf("Data (dd/mm/aaaa): ");
    scanf("%19s", data);
    printf("Hora (hh:mm): ");
    scanf("%9s", hora);

    FILE *arquivo = fopen("remedios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%s %s\n", data, hora);
    fclose(arquivo);

    printf("Salvo com sucesso.\n");
    return 0;
}
