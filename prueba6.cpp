#include <stdio.h>
#include <string.h>
int main()
{
    char cad1[100];
    printf("Introduce una frase \n");
    gets(cad1);
    printf("Las palabras que componen la frase son: %s \n", cad1);
    puts(cad1);
    getchar();
}
