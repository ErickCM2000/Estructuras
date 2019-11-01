#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo **milista, int x);
void mostrar(struct nodo *milista);

int main(int argc, char const *argv[]) {

  struct nodo *milista = NULL;

  insertar(&milista, 34);


  mostrar(milista);

  return 0;
}

void insertar(struct nodo **milista, int x){
  // si la lista no tiene ningun nodo, creará el primero  x->NULL
  if (milista == NULL){

    struct nodo *milista = malloc(sizeof(struct nodo));
    if (milista == NULL){
      printf("no hay memoria suficiente\n");
    } else {
      milista -> dato = x;
      milista -> siguiente == NULL;
    }

  } else { // si ya existe la lista, creará un nodo más.  x->x'->NULL

    struct nodo *milista = malloc(sizeof(struct nodo));
    if(milista == NULL){
      printf("no hay memoria suficiente\n");
    } else {
      milista -> siguiente -> dato = x;
      milista -> siguiente -> siguiente == NULL;
    }

  }

}

void mostrar(struct nodo *milista){

    printf("%d\n",milista -> dato);


}
