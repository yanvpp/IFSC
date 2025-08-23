#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    int c; // int para imprimir os caracteres baseado na tabela ASCII

    arquivo = fopen("teste.txt", "r");

    if (arquivo == NULL){
        printf("O arquivo não foi encontrado ou não existe.\n");
        exit(EXIT_FAILURE);
    }

    printf("Conteúdo do arquivo: ");

    while((c = fgetc(arquivo)) != EOF){ // EOF = End Of File, vai imprimir todos os caracteres até o fim do arquivo, se fosse array seria o '\0'
        putchar(c);
    }

    fclose(arquivo);

    return 0;
}