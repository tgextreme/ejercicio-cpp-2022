#include <stdio.h>
#include <string.h>
int main()
{
    printf("Escriba una frase");
  char str[100];
  scanf("%s", &str);
  int len = strlen(str);
  char delimiter[] = " ";
  char *p = strtok(str, delimiter);
  while(p != NULL)
  {
    printf("'%s'\n", p);
    p = strtok(NULL, delimiter);
  }
  printf("\n");
  return 0;
}