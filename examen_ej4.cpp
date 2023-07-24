#include <stdio.h>
#include <windows.h>
#include <string.h>

void setHorarioVuelo(char *actual);
void setPlazasLibres(int *actual);

int main()
{
    struct
    {
        int numeroVuelo;
        char horaPartida[16];
        int* numeroPlazasLibres;
        char destino[300];

    } avion;

    avion.numeroVuelo = 50;
    int plazasIntermedio;
    strncpy(avion.horaPartida, "2022-07-28 22:50", 16);
    
    strncpy(avion.destino, "Aeropuerto de Madrid 23232", 300);

    setHorarioVuelo(avion.horaPartida);

    setPlazasLibres(avion.numeroPlazasLibres);
    // horaPartida="2022-07-28 22:50";
}
void setHorarioVuelo(char *actual)
{
    printf("Cambiamos horario:\n");
    char nuevo[16];
    gets(nuevo);
    strncpy(actual, nuevo, 300);
    printf("Horario cambiado correctamente a %s", nuevo);
}
void setPlazasLibres(int *actual)
{
    printf("\n Cambiamos numero de plazas \n");
    scanf("%d", &actual);
    printf("todo cambiado correctamente");
}