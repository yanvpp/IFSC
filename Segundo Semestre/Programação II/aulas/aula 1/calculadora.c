#include <stdio.h>
#include "calculadora.h"

int main(){

    int a, b, resultado;

    printf("Entre com o primeiro número: ");
    scanf("%d", &a);
    printf("Entre com o segundo número: ");
    scanf("%d", &b);

    resultado = soma(a,b);

    printf("Resultado: %d\n", resultado);

    return 0;
}