#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo *milista, int num);
void mostrar(struct nodo *milista);

int main(int argc, char const *argv[]) {

  struct nodo milista;

  milista.dato = 10;
  milista.siguiente = malloc(sizeof(struct nodo));

  milista.siguiente -> dato = 20;
  milista.siguiente -> siguiente = malloc(sizeof(struct nodo));

  milista.siguiente -> siguiente -> dato = 30;
  milista.siguiente -> siguiente -> siguiente = NULL;

  return 0;
}


void mostrar(struct nodo *milista){
  while(milista != NULL){
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }
}
