#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *p;

    printf("Quantos valores deseja armazenar? ");
    scanf("%d", &tamanho);

    p = (int*) malloc(tamanho * sizeof(int));

    if (p == NULL) {
        printf("Não foi possível alocar memória\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("Valores armazenados: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);

    return 0;
}