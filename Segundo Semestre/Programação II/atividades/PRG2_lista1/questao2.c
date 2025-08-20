#include <stdio.h>

#define INDEX 10

int main(){
    int array[INDEX], *p = array; // Quando não escrevemos o índice, estamos nos referindo ao primeiro elemento do arranjo

    for(int i = 0; i < INDEX; i++){
        array[i] = i;
    }

    for(p = array; p < array + INDEX; p++){
        printf("%d\t", *p);
    }

    return 0;
}