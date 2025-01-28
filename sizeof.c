#include <stdio.h>
#include <stdlib.h>

int main(){

  printf("El tipo de dato <char> tiene un tamaño de %zd bytes\n", sizeof(char));
  printf("El tipo de dato <short int> tiene un tamaño de %zd bytes\n", sizeof(short int));
  printf("El tipo de dato <int> tiene tamaño de %zd bytes\n", sizeof(int));
  printf("El tipo de dato <float> tiene un tamaño de %zd bytes\n", sizeof(float));
  printf("El tipo de dato <long> tiene un tamaño de %zd bytes\n", sizeof(long));
  printf("El tipo de dato <long long> tiene un tamaño de %zd bytes\n", sizeof(long long));
  printf("El tipo de dato <double> tiene un tamaño de %zd bytes\n", sizeof(double));
  printf("El tipo de dato <long double> tiene un tamaño de %zd bytes\n", sizeof(long double));

  return 0;
}
