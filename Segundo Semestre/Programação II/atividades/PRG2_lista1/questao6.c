#include <stdio.h>

int main(){
    char string[] = "string";
    char *p = string;

    printf("Caracteres da string:\n");

    while (*p != '\0')
    {
        printf("%c\n", *p);
        p++;
    }
    
    return 0;
}