#include <stdio.h>
#include <windows.h>
void perfecto(int numero);
int main()
{
    int entero, i;
    int num = 0;
    int divisores[100];

    printf("Escribeme un numero: \n");
    scanf("%d", &entero);
    perfecto(entero);
}
void perfecto(int entero)
{
    int i, divisores=0;
    
    for (i = 1; i < entero; i++)
    {
        if (entero % i == 0)
        {
            divisores=divisores+i;
        }
    }

    if(divisores==entero){
        printf("El numero es perfecto");
    }else{
        printf("El numero no es perfecto");
    }
}