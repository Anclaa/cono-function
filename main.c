#include "funciones.h"
#include <math.h>
#include <stdio.h>

int main(void) {

  float h;
  // pedimos que el usuario ingrese el centro
  printf("A continuación ingrese las coordenadas del centro:\n");
  float x1 = ingresarpunto('X', 1);
  float y1 = ingresarpunto('Y', 1);
  float z1 = ingresarpunto('Z', 1);

  // pedimos que el usuario ingrese el punto en el borde
  printf("A continuación ingrese las coordenadas del punto en el borde de la "
         "base del cono:\n");
  float x2 = ingresarpunto('X', 2);
  float y2 = ingresarpunto('Y', 2);
  float z2 = ingresarpunto('Z', 2);

  // pedimos que el usuario ingrese la altura total
  printf("\nA continuación ingrese la altura total:\n");
  scanf("%f", &h);

  // Con los datos obtenidos podemos usar las funciones y hallar el resto de
  // componentes
  //  Primero calculamos la distancia entre el centro y el borde del cono
  float r = c_distancia(x1, x2, y1, y2, z1, z2);

  // Ahora nuestra distancia sera el radio grande del cono truncado
  // Sacamos el radio menor del cono truncado

  float rmen = r_menor(h, r);

  // con el radio menor ya tenemos todos los elementos para calcular el volumen

  float v = c_volumen(h, r, rmen);
  
  printf("\nEl volumen del cono es: %.2f u3", v);
  return 0;
}