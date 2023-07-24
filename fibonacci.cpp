#include <stdio.h>
#include <windows.h>
int main()
{
    int anterior, siguiente, intermedio, i, hasta;

    anterior = 0;
    siguiente = 1;
    scanf("%d", &hasta);
    intermedio = 1;
    // printf("0\n1\n", intermedio);
    printf("%d \n", intermedio);
    for (i = 1; i <= hasta - 1; i++)
    {
        intermedio = anterior + siguiente;
         printf("%d\n", intermedio);
        anterior = siguiente;
        siguiente = intermedio;
    }

    printf("%i", intermedio);
}