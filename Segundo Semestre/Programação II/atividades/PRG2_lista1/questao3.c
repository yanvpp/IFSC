#include <stdio.h>

void modificar(int *n){
    *n *= 10;
}

int main(){
    int n = 10;

    printf("n: %d\n", n);

    modificar(&n);

    printf("n modificado: %d\n", n);

    return 0;
}