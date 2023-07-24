#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    char ecuacion[20]= "2/3x+1/2x=2x";
    int i=0;
    for (i = 0; i < (strlen(ecuacion)); i++)
        {
            // printf("log1");
            if (ecuacion[i] == '/')
            {
                printf("__ \n")   ;
                
            }else{
                printf("%c\n", ecuacion[i]);
            }
        }

}