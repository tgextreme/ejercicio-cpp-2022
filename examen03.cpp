#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
    char intermedio[100];
    char frase[200];

    /*while(!feof(fichero)){
        fscanf(fichero,"%s", intermedio);
        printf("%s\n", intermedio);
    }*/
    FILE *pf = fopen("polinomio.txt", "rt");
    int i = 0;
    int contador = 0;
    while (fgets(intermedio, 100, pf))
    {
        for (i = 0; i < (strlen(intermedio)); i++)
        {
            // printf("log1");
            if (intermedio[i] == ' ')
            {
                contador = contador + 1;
                
            }
        }
        printf("el grado es igual a %i \n", contador+1);
        contador=0;
    }
}
