#include <stdio.h>

int main(void) {
  float calificacion;
  printf("Ingrese su calificacion: ");
  scanf("%f",&calificacion);
  if(calificacion >= 9)
    printf("Excelente");
  else if(calificacion >=7)
    printf("Muy bueno");
  else if(calificacion >= 5)
    printf("Bueno");
  else if(calificacion >= 3)
    printf("Regular");
  else
    printf("Insuficiente");
  return 0;
}