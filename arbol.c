#include "stdio.h"
#include "stdlib.h"

struct arbol{
  int dato;
  struct arbol *izquierdo;
  struct arbol *derecho;
};

void insertar(struct arbol *tree, int num);

int main(int argc, char const *argv[]) {

  struct arbol *tree = NULL;
  tree = malloc(sizeof(struct arbol));

  return 0;
}

void insertar(struct arbol *tree, int num){

}



/*

  recibe los datos de un cliente (nombre, edad, si cuenta con tarjeta de descuentos y los items comprados).
  Devuelve un ticket que muestra el código y precio de cada elemento, el total de la compra, la fecha y hora de la compra.
  Lee códigos de elementos de un archivo de texto

*/
