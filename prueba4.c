#include <stdio.h>

int main(){

    int i, o, m;
    for(i=0;i<=10;i++){
        for(o=0;o<=10;o++){
            m=o*i;
            printf("%i * %i = %i \n", i, o, m);
        }
        printf("\n \n");
        //printf("El numero es %i \n", i);
    }
   
    
    getchar();
}