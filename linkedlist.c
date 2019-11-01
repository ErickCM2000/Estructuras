#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo **milista, int x);

int main(int argc, char const *argv[]) {

  struct nodo *milista = NULL;

  insertar(&milista , 34);
  insertar(&milista , 22);
  insertar(&milista , 45);

  return 0;
}

void insertar(struct nodo **milista, int x){
  // si la lista no tiene ningun nodo, creará el primero
  if (milista == NULL){

    milista = malloc(sizeof(struct nodo));
    if (milista == NULL){
      printf("no hay memoria suficiente\n");
    } else {
      milista -> dato = x;
      milista -> siguiente == NULL;
    }

  } else { // si ya existe la lista, creará un nodo más.

    milista = malloc(sizeof(struct nodo));
    if(milista == NULL){
      printf("no hay memoria suficiente\n");
    } else {
      milista -> siguiente = x;
      milista -> siguiente -> siguiente == NULL;
    }

  }


}
