#include <stdio.h>
#include <stdlib.h>

void soma(float a, float b);

int main (int argc, char *argv[])
{
  float a = atof (argv[1]);
  float b = atof (argv[2]);
  soma(a, b);
  return 0;
}


void soma(float a, float b){
  printf("%.2f\n", a + b);
}
