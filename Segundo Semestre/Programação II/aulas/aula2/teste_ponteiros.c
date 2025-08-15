#include <stdio.h>

int main(){
    int i = 10, j = 0, *p;

    p = &i;
    *p = *p + 1;
    j = *p + 2;
    *p+=1;
    (*p)++;
    *p++;
    p++;

    printf("i: %d\tj: %d\tp: %p\t*p: %p\t*p\n", i, j, p, *p); // \t == tab

    return 0;
}