#include <stdio.h>
#include <stdlib.h>

int main(){
int *vetor = malloc(5*sizeof(int));

    printf("Entre com 5 valores: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    vetor = realloc(vetor, 2*5*sizeof(int));
    if (vetor == NULL) {
    printf("Erro ao realocar memória\n");
    exit(EXIT_FAILURE);
    }

    printf("Entre com mais 5 valores: ");

    for (int i = 5; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores armazenados:\t");

    for (int i = 0; i < 10; i++) {
        printf("%d\t", vetor[i]);
    }

    free(vetor);
    return 0;
}