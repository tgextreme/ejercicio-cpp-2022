#include <stdio.h>
#include <windows.h>
void perfecto(int numero);
void abundante(int numero);
void deficiente(int numero);
int main(){
    int entero, i;
    int numero = 0;
    int divisores[100];
    printf("Escribeme un numero: \n");
    scanf("%d", &entero);
    perfecto(entero);
    abundante(entero);
    deficiente(entero);
}
void perfecto(int entero){
    int i, divisores=0; 
    for (i = 1; i < entero; i++){
        if (entero % i == 0){
            divisores=divisores+i;
        }
    }
    if(divisores==entero){
        printf("El numero es perfecto\n");
}else{
    printf("El numero no es perfecto\n");
}

}
void abundante(int entero){
    int i, divisores=0;
    for (i = 1; i < entero; i++){
        if (entero % i == 0){
            divisores=divisores+i;
        }
    }
    if(divisores<entero){
        printf("El numero es abundante\n");
}else{
    printf("El numero no es abundante\n");
}

}
void deficiente(int entero){
    int i, divisores=0;
    for (i = 1; i < entero; i++){
        if (entero % i == 0){
            divisores=divisores+i;
        }
    }
    if(divisores>entero){
        printf("El numero es deficiente\n");
}else{
    printf("El numero no es deficiente\n");
}
    
}