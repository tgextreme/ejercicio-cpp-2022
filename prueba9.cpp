#include <stdio.h>
#include <windows.h>
#include <string.h>

main(){
    int i;
    char contrasena[100], correcta[100];
    printf ("Introduce la contrasena que quieres guardar \n");
        gets(contrasena);
    printf ("Para acceder a los datos deseados, introduzca de nuevo la contrasena \n");
        gets(correcta);
            if(strcmp(contrasena,correcta)==0){
                printf ("Ya ha podido acceder a los datos con exito, contrasena correcta");
            } else{
                printf ("La contrasena es incorrecta, %c no es la contrasena \n", contrasena);
            }
    getchar();
    getchar();
}