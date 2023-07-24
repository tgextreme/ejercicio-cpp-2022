#include <stdio.h>
#include <windows.h>

main()
{
    int a, b, c, cont;
    printf("Mostrar el numero 5 de la frecuencia de Fibonacci /n");
    a = 1;
    b = 0;
    c = b + a;
    for (cont = 1; cont < 10; cont++)
    {
        c = a + b;
        //printf("%i \n", c);
        a = b;
        b = c;
        if (cont == 5)
        {
            printf("El numero 5 de la frecuencia es: \n");
            printf("%d ", c);
        } // Cierre del if
    }     // Cierre del for
    //system("PAUSE");
    //return 0;
} // Cierre del main
