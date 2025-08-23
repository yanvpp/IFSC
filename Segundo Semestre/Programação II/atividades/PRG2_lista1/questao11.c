#include <stdio.h>
#include <stdlib.h>

int main(){
    char caractere, origem[100], destino[100];

    printf("Entre com o nome do arquivo de origem (ex: origem.txt): ");
    scanf("%s", origem);
    printf("Entre com o nome do arquivo de destino (ex: destino.txt): ");
    scanf("%s", destino);

    FILE *arquivo_origem = fopen(origem, "r");
    FILE *arquivo_destino = fopen(destino, "w");

    if (arquivo_origem == NULL || arquivo_destino == NULL){
        printf("O arquivo não foi encontrado ou não existe.\n");
        exit(EXIT_FAILURE);
    }


    while((caractere = fgetc(arquivo_origem)) != EOF){
        fputc(caractere, arquivo_destino);
    }

    printf("Mensagem transferida com sucesso!");

    fclose(arquivo_origem);
    fclose(arquivo_destino);

    return 0;
}