#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar(struct nodo **milista, int x);
void mostrar(struct nodo *milista);
//void eliminar(struct nodo, int ) eliminar el último o una posición dada.

int main(int argc, char const *argv[]) {

  struct nodo *milista;

	milista = malloc(sizeof(struct nodo));
	milista -> dato = 3;
	milista -> siguiente = NULL;

  insertar(&milista, 10);
  insertar(&milista, 20);
  insertar(&milista, 30);
  insertar(&milista, 40);
  insertar(&milista, 50);

  mostrar(milista);

  return 0;
}

void insertar(struct nodo **milista, int x){

  struct nodo *nodotemporal = malloc(sizeof(struct nodo));
  struct nodo *ultimo = *milista;

  nodotemporal -> dato = x;
  nodotemporal -> siguiente = NULL;

	// Sí la lista no cuenta con ningún nodo, se creará el primero.
  if (*milista == NULL) {
	   *milista = nodotemporal;
	return;
}

	/*while(*(milista -> siguiente) != NULL){
		**milista = *(milista -> siguiente);
	}
    //Preguntar por qué no funciona
	*milista = nodotemporal;*/

  while (ultimo -> siguiente != NULL){
		ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = nodotemporal;

}

void mostrar(struct nodo *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}
