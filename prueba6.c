#include <stdio.h>

void main(){
    int i=5;
    int o =i;
 
    printf("valor o %i \n", o);
    int* u=i;
    printf("valor i puro %i \n", i);    
    u=u+5;
    printf("valor i sumando u %i \n", u);
}