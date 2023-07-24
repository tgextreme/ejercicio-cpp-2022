#include <stdio.h>
#include <windows.h>

void separarfrase(char** palabra);

int main()
{
    int opcion;
    int v[10];
    int i = 0;
    int max, min;
    int numeroIntermedio, numeroIntermedioMin;
    do
    {
        printf("1.- Carga de datos\n");
        printf("2.- Valor máximo/mínimo del vector\n");
        printf("3.- Mostrar los elementos pares del vector\n");
        printf("4.- Mostrar la suma de los elementos del vector\n");
        printf("5.- Salir\n");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:

            for (i = 0; i <= 10; i++)
            {
                printf("Pon el numero %d \n", i);
                scanf("%i", &v[i]);
            }
            break;
        case 2:

            numeroIntermedio = v[0];
            for (i = 0; i <= 10; i++)
            {
                if (v[i] > numeroIntermedio)
                {
                    numeroIntermedio = v[i];
                }
            }
            printf("El número máximo es %i \n", numeroIntermedio);

            numeroIntermedio = v[0];
            for (i = 0; i <= 10; i++)
            {
                if (v[i] < numeroIntermedio)
                {
                    numeroIntermedio = v[i];
                }
            }
            printf("El número minimo es %i\n", numeroIntermedio);
            break;

        case 3:
            for (i = 0; i <= 10; i++)
            {
                if (v[i] % 2 == 0)
                {
                    printf("%d es par \n", v[i]);
                }
            }

            break;
        case 4:
            break;
        default:
            break;
        }
    } while (opcion != 5);
    // 1.- pedir 10 enteros por teclado y almacenarlos en un vector
}
void separarfrase(char** frase){
    
}