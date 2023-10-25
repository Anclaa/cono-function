#include <stdio.h>
#include <math.h>
#include "funciones.h"

float c_distancia(float x1, float x2, float y1, float y2, float z1, float z2){
  float distancia;
  distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
  return distancia;
}

float r_menor(float ht, float h, float r){
  float r_men;
  r_men=(h*r)/ht;
  return r_men;
}


