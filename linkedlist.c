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

  insertar(&milista, 10);
  insertar(&milista, 20);
  insertar(&milista, 30);
  insertar(&milista, 40);
  insertar(&milista, 50);

  mostrar(milista);

  return 0;
}

void insertar(struct nodo **milista, int x){

  struct nodo *nodotemporal = (struct nodo*) malloc(sizeof(struct nodo));
  struct nodo *ultimo = *milista;

  nodotemporal -> dato = x;
  nodotemporal -> siguiente = NULL;

  if (*milista == NULL) {
	   *milista = nodotemporal;
	return;
}

  while (ultimo -> siguiente != NULL){
		ultimo = ultimo -> siguiente;
  }

  ultimo -> siguiente = nodotemporal;

}

void mostrar(struct nodo *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}
