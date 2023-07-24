#include <stdio.h>
#include <string.h>

int main()
{

    char palabra[30];
    char intermedio[30];

    scanf("%s", palabra);
    int i = 0;
    char separador[] = " ";
    char *palabras = strtok(palabra, separador);
    if (palabras != NULL)
    {
        while (palabras != NULL)
        {
            printf("%s \n", palabras);
            palabras=strtok(NULL, separador);
        }
    }

    /*for(i=0;i<30;i=i+1){
        if(strcmp(palabra[i], separador[0])==0){
            printf("%s", &intermedio);
           // intermedio[0]="\0";
           // printf("\n");
        }else{
         //   strcat(intermedio, palabra[i]);

        }


    }*/

    return 0;
}
