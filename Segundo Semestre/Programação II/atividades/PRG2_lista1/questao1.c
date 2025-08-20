#include <stdio.h>

int main(){
    int n = 10, *p = &n;

    printf("Número impresso a partir do ponteiro: %d\n", *p);

    return 0;
}