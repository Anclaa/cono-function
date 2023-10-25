#include "funciones.h"
#include <math.h>
#include <stdio.h>

float c_distancia(float x1, float x2, float y1, float y2, float z1, float z2) {
  float distancia;
  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
  return distancia;
}

float r_menor(float h, float r) {
  printf("\nNota: para este ejercicio se considera que la altura truncada es 3/4 "
         "de la altura total\n");
  float r_men, ht;
  ht = h * 3 / 4;
  r_men = (h * r) / ht;
  return r_men;
}

float ingresarpunto(char vec, int n) {
  float vector;
  printf("Ingrese el valor del punto %c del punto %d: ", vec, n);
  scanf("%f", &vector);
  return vector;
}

float c_volumen(float h, float r_ma, float r_men) {
  float volumen =
      (h * M_PI) * (pow(r_ma, 2) + pow(r_men, 2) + (r_ma * r_men)) / 3;
  return volumen;
}