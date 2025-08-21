#include <stdio.h>

int main(){
    int linhas, colunas, **matriz;

    printf("Entre com a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Entre com a quantidade de colunas: ");
    scanf("%d", &colunas);

    matriz = (int **)(malloc(linhas * sizeof(int *)));

    if (matriz == NULL){
        printf("Erro ao alocar memória\n");
        return 0;
    }

    return 0;
}