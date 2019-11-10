#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo **mipila, int x);
void mostrar(struct nodo *mipila);
void insertar_alprincipio(struct nodo **mipila, int num);
//void eliminar(struct nodo, int ) eliminar el último o una posición dada.

int main(int argc, char const *argv[]) {

  struct nodo *mipila;

	mipila = malloc(sizeof(struct nodo));
	mipila -> dato = 3;
	mipila -> siguiente = NULL;

  insertar(&mipila, 10);
  insertar(&mipila, 20);
  insertar(&mipila, 30);
  insertar(&mipila, 40);
  insertar(&mipila, 50);

  mostrar(mipila);

  return 0;
}

void insertar(struct nodo **mipila, int x){

	// Sí la pila no cuenta con ningún nodo, se creará el primero.
  if (*mipila == NULL) {
	   *mipila = nodotemporal;
	return;
}

struct nodo *nodotemporal = malloc(sizeof(struct nodo));
struct nodo *ultimo = *mipila;

nodotemporal -> dato = x;
nodotemporal -> siguiente = NULL;

	/*while(*(mipila -> siguiente) != NULL){
		**mipila = *(mipila -> siguiente);
	}
    //Preguntar por qué no funciona
	*mipila = nodotemporal;*/

  while (ultimo -> siguiente != NULL){
		ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = nodotemporal;

}

void mostrar(struct nodo *mipila){

  while (mipila != NULL) {
    printf("%d\n", mipila -> dato);
    mipila = mipila -> siguiente;
  }

}

void insertar_alprincipio(struct nodo **mipila, int num){

  if(*mipila == NULL){ //si la mipila no cuenta con ningún nodo, se creará el primero.
    *mipila = malloc(sizeof(struct nodo));
    return;
  } else {

    struct nodo *temporal = malloc(sizeof(struct nodo));
    temporal -> dato = num;
    temporal -> siguiente = *mipila;
    *mipila = temporal;

  }

}
