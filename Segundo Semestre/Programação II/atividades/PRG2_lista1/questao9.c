#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100], texto[500];

    printf("Insira o nome do arquivo: ");
    scanf("%s", nome);

    FILE *arquivo = fopen(nome, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(EXIT_FAILURE);
    }

    printf("Insira o texto: ");
    getchar();
    fgets(texto, sizeof(texto), stdin);
    fprintf(arquivo, "%s", texto);

    fclose(arquivo);

    return 0;
}