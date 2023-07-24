#include <stdio.h>
#include <windows.h>

int main()
{
    int telefono[9];
    printf("escribeme telefono con espacios");
    scanf("%d", &telefono[0]);
    scanf("%d", &telefono[1]);
    scanf("%d", &telefono[2]);
    scanf("%d", &telefono[3]);
    scanf("%d", &telefono[4]);
    scanf("%d", &telefono[5]);
    scanf("%d", &telefono[6]);

    scanf("%d", &telefono[7]);
    scanf("%d", &telefono[8]);

    for (int i = 0; i < 9; i++)
    {

        if (telefono[i] == 0)
        {
            printf("0 ");
        }
        else if (telefono[i] == 1)
        {
            printf("I ");
        }
        else if (telefono[i] == 2)
        {
            printf("II ");
        }
        else if (telefono[i] == 3)
        {
            printf("III ");
        }
        else if (telefono[i] == 4)
        {
            printf("IV ");
        }
        else if (telefono[i] == 5)
        {
            printf("V ");
        }
        else if (telefono[i] == 6)
        {
            printf("VI ");
        }
        else if (telefono[i] == 7)
        {
            printf("VII ");
        }
        else if (telefono[i] == 8)
        {
            printf("VIII ");
        }
        else if (telefono[i] == 9)
        {
            printf("IX ");
        }

        // printf("%d", telefono[i]);
    }
}
