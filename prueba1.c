#include <stdio.h>
#include <string.h>
int main()
{
    char primerapalabra[100], segundapalabra[100], tercerapalabra[100];
    printf("Introduce una frase \n");
    scanf("%s", &primerapalabra);
    scanf("%s", &segundapalabra);
    scanf("%s", &tercerapalabra);
    getchar();
    printf("Se subdivide en: \n");
    printf("%s \n", primerapalabra);
    printf("%s \n", segundapalabra);
    printf("%s \n", tercerapalabra);
    getchar();
}