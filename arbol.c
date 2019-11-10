#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *izquierdo;
  struct nodo *derecho;
};

void insertar(struct nodo **arbol, int num);

int main(int argc, char const *argv[]) {

  struct nodo *arbol = NULL;
  arbol = malloc(sizeof(struct nodo));

  insertar(&arbol);
  return 0;
}

void insertar(struct nodo **arbol, int num){

  if(*arbol == NULL){
    *arbol = malloc(sizeof(struct nodo));
    return;
  } else {
    struct nodo *nodotemporal = malloc(sizeof(struct nodo));
    nodotemporal -> dato = num;
    nodotemporal -> izquierdo = NULL;
    nodotemporal -> derecho = NULL;
  }
}



/*

  recibe los datos de un cliente (nombre, edad, si cuenta con tarjeta de descuentos y los items comprados).
  Devuelve un ticket que muestra el código y precio de cada elemento, el total de la compra, la fecha y hora de la compra.
  Lee códigos de elementos de un archivo de texto o los recibe

*/
