#include <stdio.h>
#include <windows.h>
#include <string.h> // Añadirlo para las películas
// Sin main al empezar (va al final)
const int dim = 80;
typedef char cadena[dim];
typedef struct fechas
{
    int dia;
    int mes;
    int anno;
};
typedef struct Pelis
{
    cadena titulo;
    fechas fechasalida;
    float nota;
};
typedef Pelis vector[dim];

// Abro el fichero para lectura antes del menu
void AbrirFicheroLectura(FILE *&fichero)
{
    char nombre1[30]; // Vble local
    do
    {
        printf("Introduce el nombre del fichero que quieres abrir \n");
        scanf("%s", &nombre1);
        fichero = fopen(nombre1, "rt");
    } while (fichero == NULL);
    if (fichero != NULL)
        printf("Fichero de lectura abierto \n");
} // Cierre del void AbrirFicheroLectura

// Abro el fichero para escritura antes del menu
void AbrirFicheroEscritura(FILE *&salida)
{
    char nombre2[30]; // Vble local
    do
    {
        printf("Introduce el nombre del archivo donde quieres guardar los resultados \n");
        scanf("%s", &nombre2);
        salida = fopen(nombre2, "wt");
    } while (salida == NULL);
    if (salida != NULL)
        printf("Fichero de escritura abierto \n");
} // Cierre del void AbrirFicheroEscritura

void LeerDatosFichero(FILE *&entrada, vector v, int &dim)
{
    int i;
    i = 0;
    while (!feof(entrada))
    {
        i++;
        fgets(v[i].titulo, 80, entrada);
        fscanf(entrada, "%i", &v[i].fechasalida.dia);
        fscanf(entrada, "%i \n", &v[i].fechasalida.mes);
        fscanf(entrada, "%i \n", &v[i].fechasalida.anno);
        fscanf(entrada, "%i \n", &v[i].nota);
        printf("i=%i \n", i);
    } // Cierre del while feof

    dim = i;
    printf("El numero de pelis en el fichero es %i \n", dim);
} // Cierre del void LeerDatosFichero

void ImprimirDatos(vector v, int dim)
{
    int i;
    for (i = 1; i <= dim; i++)
    {
        puts(v[i].titulo);
        printf("El titulo es: %s \n", v[i].titulo);
        printf("La fecha es: %i/%i/%i \n", v[i].fechasalida.dia, v[i].fechasalida.mes, v[i].fechasalida.anno);
        printf("La puntuacion es: %i \n", v[i].nota);
        printf("\n");
    } // Cierre del for i
} // Cierre del void LeerDatosFichero

void MostrarDatos(vector v, int dim)
{
    int i;
    for (i = 1; i <= dim; i++)
    {
        puts(v[i].titulo);
        printf("El titulo es: %s \n", v[i].titulo);
        printf("La fecha es: %i/%i/%i \n", v[i].fechasalida.dia, v[i].fechasalida.mes, v[i].fechasalida.anno);
        printf("La puntuacion es: %i \n", v[i].nota);
        printf("\n");
    } // Cierre del for i
} // Cierre del void LeerDatosFichero

void IncrementarDatos(vector v, int dim, int &newdim)
{
    int i, numero;
    printf("Cuantas pelis vas ha introducir \n");
    scanf("%i", &numero);
    newdim = dim + numero;
    printf("newdim=%i \n", newdim);
    for (i = dim + 1; i <= newdim; i++)
    {
        printf("Introduce el titulo de la peli %i \n", i);
        scanf("%s", &v[i].titulo);
        printf("Introduce la fecha de salida de la peli %i \n", i);
        scanf("%i %i %i", &v[i].fechasalida.dia, &v[i].fechasalida.mes, &v[i].fechasalida.anno);
        printf("Introduce la puntuacion de la peli %i \n", i);
        scanf("%i", &v[i].nota);
    } // Cierre del for i
}

void BuscarDatos(vector v, int &newdim)
{
    int i;
    char titulo[30];
    bool chivato;
    chivato = true;
    printf("Introduce el titulo de la pelicula que quieres buscar \n");
    gets(titulo);
    for (i = dim + 1; i <= newdim; i++)
    {
        if (strcmp(titulo, v[i].titulo) == 0)
        {
            printf("Pelicula encontrada \n");
            printf("El titulo es: %s \n", &v[i].titulo);
            printf("La fecha es: %i/%i/%i \n", &v[i].fechasalida.dia, &v[i].fechasalida.mes, &v[i].fechasalida.anno);
            printf("La nota es: %f \n", &v[i].nota);
            printf(" \n");
            chivato = false;
        } // Cierre del if
        if (chivato)
            printf("Pelicula NO encontrada \n");
    } // Cierre del for i
} // Cierre del void IntroducirNuevosDatos

void GuardarResultadosPrimeraPeliculaDelFicheroYLaPrimeraPeliculaIntroducidaPorTeclado(FILE *&salida, vector v)
{
    char nombre2[30]; // Vble local
    int i;
    printf("%s %i/%i/%i %f \n", v[1].titulo, v[1].fechasalida.dia, v[1].fechasalida.mes, v[1].fechasalida.anno, v[1].nota);
    fprintf(salida, "%s %i/%i/%i %f \n", v[1].titulo, v[1].fechasalida.dia, v[1].fechasalida.mes, v[1].fechasalida.anno, v[1].nota);
    printf("%s %i/%i/%i %f \n", v[dim + 1].titulo, v[dim + 1].fechasalida.dia, v[dim + 1].fechasalida.mes, v[dim + 1].fechasalida.anno, v[dim + 1].nota);
    fprintf(salida, "%s %i/%i/%i %f \n", v[dim + 1].titulo, v[dim + 1].fechasalida.dia, v[dim + 1].fechasalida.mes, v[dim + 1].fechasalida.anno, v[dim + 1].nota);
    printf("Datos guardados en resultados.dat \n");
}

void menu()
{

    FILE *fichero, *salida;
    int opcion, dim, newdim;
    vector v;

    do
    {
        printf("                       MENU                  \n");
        printf("1.- Abrir datos del fichero (peliculas.dat)  \n");
        printf("2.- Cargar datos en un vector                \n");
        printf("3.- Anadir nuevos datos de un vector         \n");
        printf("4.- Mostrar todas las peliculas en pantalla  \n");
        printf("5.- Buscar una pelicula                      \n");
        printf("6.- Modificacion (guardar en resultados.dat la primera pelicula.dat+la primera pelicula introducida por teclado) \n");
        printf("7.- Salir                                    \n");
        scanf("%i", &opcion);
        getchar();
        switch (opcion)
        {
        case 1:
            AbrirFicheroLectura(fichero);
            AbrirFicheroEscritura(salida);
            break;

        case 2:
            LeerDatosFichero(fichero, v, dim);
            ImprimirDatos(v, dim);
            break;

        case 3:
            IncrementarDatos(v, dim, newdim);
            ImprimirDatos(v, newdim);
            break;

        case 4:
            MostrarDatos(v, newdim);
            break;

        case 5:
            BuscarDatos(v, newdim);
            break;

        case 6:
            GuardarResultadosPrimeraPeliculaDelFicheroYLaPrimeraPeliculaIntroducidaPorTeclado(salida, v);
            break;

        case 7:
            printf("Adios \n");
            system("pause");
            break;

        default:
            printf("Recuerda una opcion del 1 al 7 \n");
        }                  // Cierre del switch
    } while (opcion != 7); // Cierre del do-while
} // Cierre del  void menu
main()
{ // En este caso va al final
    menu();
}