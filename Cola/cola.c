#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo **mcola, int x);
void mostrar(struct nodo *mcola);
void insertar_alprincipio(struct nodo **mcola, int num);
void esta_vacia(struct nodo *mcola);

int main(int argc, char const *argv[]) {

  struct nodo *mcola = NULL;

  esta_vacia(mcola);

	mcola = malloc(sizeof(struct nodo));
	mcola -> dato = 3;
	mcola -> siguiente = NULL;
  insertar(&mcola, 10);
  insertar(&mcola, 20);
  insertar(&mcola, 30);
  insertar(&mcola, 40);
  insertar(&mcola, 50);
  mostrar(mcola);

  return 0;
}

void esta_vacia(struct nodo *mcola){
  if(mcola == NULL){
    printf("\nLa cola esta vacia.");
    printf("\n");
  } else {
    printf("\nLa cola no esta vacia.");
    printf("\n");
  }
}

void insertar(struct nodo **mcola, int x){

	// Sí la cola no cuenta con ningún nodo, se creará el primero.
  if (*mcola == NULL) {
	   *mcola = malloc(sizeof(struct nodo));
	return;
}

struct nodo *nodotemporal = malloc(sizeof(struct nodo));
struct nodo *ultimo = *mcola;

nodotemporal -> dato = x;
nodotemporal -> siguiente = NULL;

  while (ultimo -> siguiente != NULL){
		ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = nodotemporal;

}

void mostrar(struct nodo *mcola){

  while (mcola != NULL) {
    printf("%d\n", mcola -> dato);
    mcola = mcola -> siguiente;
  }

}

void insertar_alprincipio(struct nodo **mcola, int num){

  if(*mcola == NULL){ //si la mcola no cuenta con ningún nodo, se creará el primero.
    *mcola = malloc(sizeof(struct nodo));
    return;
  } else {

    struct nodo *temporal = malloc(sizeof(struct nodo));
    temporal -> dato = num;
    temporal -> siguiente = *mcola;
    *mcola = temporal;

  }

}
