#include <stdio.h>
#include <stdlib.h>

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

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
        printf("Erro ao alocar memória\n");
        return 0;
        }
    }


    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Digite o valor da posição %d%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }    

    printf("valores armazenados:\n");
    for (int I = 0; I < linhas; I++){
        printf("\n");
        for (int J = 0; J < colunas; J++){
            printf("%d\t", matriz[I][J]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}