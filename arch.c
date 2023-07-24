#include <stdio.h>
#include <windows.h>
int pot (int numero, int grado);
int pot1 (int numero, int grado);
int main()
{
    int arr[5];
    arr[0] = 12;
    arr[1] = 15;
    arr[2] = 150;
    arr[3] = 160;
    arr[4] = 11;
    int grado=4;
    int i;
    int resultado=0;
    for (i=0;i<5;i++){
        printf("llamo a resultado con arr[%i] y potencia %i \n", arr[i], grado);
        resultado = pot(arr[i], grado);
        printf("%d^%i \n", arr[i], grado);
        printf("%d \n", resultado);
    }
}

void holamundo(char* nombre){
    printf("holamundo %s", nombre);
}


int pot(int numero, int grado){
    int i, multiplicando;
    i= 0;
    multiplicando=numero;
    for(i=1;i<grado;i++){
        numero=numero*multiplicando;  
    }
    return numero;

}
int pot1(int numero, int grado){
    int i= 0;
    int resultado=0;
    
    while(grado<1){
        numero=numero*grado;  
        grado--;
    }
    return numero;

}