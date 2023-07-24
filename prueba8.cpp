#include<stdio.h>  
#include<windows.h>
void Abrirficherolectura(FILE*&entrada){
char nombre1[30];
// Abrir el fichero para lectura antes del menu
     do{ 
        printf("Introduce el nombre del fichero que quieres abrir para leer \n");
        scanf("%s",&nombre1); 
        entrada=fopen(nombre1,"rt");
       }while(entrada==NULL);
            if(entrada!=NULL)   
            printf("Fichero de lectura abierto \n");
     }
void Abrirficheroescritura(FILE*&salida){
char nombre2[30];
// Abrir el fichero para escritura antes del menu
    do{ 
        printf("Introduce el nombre del archivo donde quieres guardar los resultados \n");
        scanf("%s",&nombre2); 
        salida=fopen(nombre2,"wt");
    }   while(salida==NULL);
            if(salida!=NULL)
            printf("Fichero de escritura abierto \n");
}
void Cargarmatrizporteclado(int M[10][10],int &dim1,int &dim2){
int i,j;
    printf("Introduce las dimensiones \n");
    scanf("%i %i",&dim1,&dim2);
    for(i=1;i<=dim1;i++)  // Cargar la matriz por teclado
        for(j=1;j<=dim2;j++){
            printf("Introduce el elemento %i %i \n",i,j);     
            scanf("%i",&M[i][j]);
            } // Cierre del for j
}
void Mostrarmatriz(int M[10][10],int dim1,int dim2){
int i,j;
    for(i=1;i<=dim1;i++){  // Mostrar la matriz
        for(j=1;j<=dim2;j++) 
        printf("%i ",M[i][j]);
        printf("\n");
        } // Cierre del for i
} // Cierre del void
void Cargarmatrizporfichero(FILE *entrada,int M[10][10],int &dim1,int &dim2){
int i,j; // Variables locales
    fscanf(entrada,"%i %i",&dim1,&dim2);
    printf("las dimensiones son dim1=%i y dim2=%i \n",dim1,dim2); 
    for(i=1;i<=dim1;i++)  // Cargar la matriz por fichero
        for(j=1;j<=dim2;j++){
            fscanf(entrada,"%i",&M[i][j]);
            fscanf(entrada,"\n");
            } 
}    
main(){
FILE *entrada,*salida;
int opcion1,opcion2,suma,dim1,dim2,M[10][10],i,j,sumafila,sumacolumna,k,pares[10],cont;
    Abrirficherolectura(entrada);
    Abrirficheroescritura(salida);
    do{
        printf("              MENU                                \n");
        printf("1.- Cargar una matriz                             \n");
        printf("2.- Mostrar los  pares de la matriz               \n");  
        printf("3.- Salir                                         \n");
        scanf("%i",&opcion1);
        switch(opcion1){
            case 1: printf("                SUBMENU               \n");
                    printf("11.- Por teclado \n"); //Submenú
                    printf("12.- Por fichero \n"); 
                    scanf("%i",&opcion2); 
                    switch(opcion2){ 
                            case 11:Cargarmatrizporteclado(M,dim1,dim2);
                                    Mostrarmatriz(M,dim1,dim2);
                            break; // Case 1.1
                            case 12:while(!feof(entrada)){  
                                       Cargarmatrizporfichero(entrada,M,dim1,dim2);
                                       Mostrarmatriz(M,dim1,dim2);
                                       }  // Cierre del bucle while feof    
                            break; // Case 12         
                            } // cierre del switch
                    break; // Case 1
            case 2: cont=0;
                    while(!feof(entrada)){
                        fscanf(entrada,"%i %i",&dim1,&dim2);
                        for(i=1;i<=dim1;i++)  // cargar la matriz por fichero
                            for(j=1;j<=dim2;j++) {
                               fscanf(entrada,"%i",&M[i][j]);
                               fscanf(entrada,"\n"); 
                               } 
                        cont++;      
                        k=1;
                        for(i=1;i<=dim1;i++)  // recorro toda la matriz
                            for(j=1;j<=dim2;j++)
                                if(M[i][j]%2==0){
                                    pares[k]=M[i][j];
                                    k++;
                                    }
                        printf("Los pares de la matriz %i son: ",cont);
                        fprintf(salida,"Los pares de la matriz %i son: ",cont);           
                        for(i=1;i<k;i++){         
                            printf("%i ",pares[i]);
                            fprintf(salida,"%i ",pares[i]);
                            }
                        printf("\n");
                        fprintf(salida,"\n");   
                        } // Cierre del bucle feof    
                    break;
            case 3: printf(" ADIOS \n");          
                    system("pause");
                    break;
           default:printf("recuerda una opcion del 1 al 3 \n");                            
           } // cierre del switch 
    }while(opcion1!=3); // cierre del do-while   
 } // cierre del main            
