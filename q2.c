#include <stdio.h>
#include <stdlib.h>


void media(int tam);

int main (int argc, char *argv[])
{
  media(argc);
  return 0;
}


void media(int tam, num[]){
  float numeros[tam];
  float total = 0.0;
  float media = 0.0;
  for (int i=0; i<tam; i++) {
    numeros[i] = num[i];
  }
  media = total / tam;
  printf("Media: %.2f", media);
}

