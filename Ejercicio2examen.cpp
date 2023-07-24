#include <stdio.h>
#include <windows.h>

int main(){
    int entero, i, numero, algoritmo, divisores;
// Inicio
    printf("Escribeme un numero: \n");
    scanf("%i", &entero);
    divisores=0; 
    for (i = 1; i < entero; i++){
        if (entero%i == 0){
               
            divisores=divisores+i;
        }
    }
// Numero perfecto
    if(divisores==entero){
    printf("El numero es perfecto");
    }
// Numero deficiente
    if (divisores<entero){
    printf("El numero es deficiente \n");
    }
// Numero abundante
if (divisores>entero){
        printf("El numero es abundante \n");
    }
getchar();
getchar();
}


