#include <stdio.h>


void mult( float num, int num_02); 

int main (int argc, char *argv[])
{
  float f = 10.88;
  mult(33, f);
  return 0;
}

void mult (float num, int num_02){
  float aux;
  aux = num*num_02;
  printf("O resultado da multiplicação eh %3.3f", aux);
}

