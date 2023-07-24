#include <stdio.h>
#include <windows.h>
#include <time.h>

main()
{
    int i = 0, j = 0;
    int M[10][10];
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    { // entra al ciclo i
        for (j = 0; j < 10; j++)
        { // entra al ciclo j
            M[i][j] = rand() % 100 + 1;
            printf("\t %i ", M[i][j]);
        } // sale del ciclo j
        printf("\n\n\n");
    } // sale del ciclo i
    for (i = 1; i < 10; i++)
    { // entra al ciclo i
        for (j = 1; j < 10; j++)
        { // entra al ciclo j
            M[i][j] = rand() % 100 + 1;
            if(M[i][j]%i && M[i][j]%i){
            printf("%i es divisible por %i y %i \n", M[i][j], i, j);
            }
        } // sale del ciclo j
        //printf("\n\n\n");
    }

    printf("\n\n"); // para dejar espacios entre filas.
}
