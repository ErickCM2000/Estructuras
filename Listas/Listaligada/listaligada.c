#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void insertar_al_final(struct nodo **milista, int num);
void mostrar(struct nodo *milista);
void insertar_al_principio(struct nodo **lista, int num);
void eliminar(struct nodo **milista, int posicion);
int numero_elementos(struct nodo *milista);

int main(int argc, char const *argv[]) {

  struct nodo *milista;

  insertar_al_final(&milista, 10);
  insertar_al_final(&milista, 20);
  insertar_al_final(&milista, 30);
  insertar_al_final(&milista, 40);
  insertar_al_final(&milista, 50);

  insertar_al_principio(&milista, 60);
  insertar_al_principio(&milista, 70);

  mostrar(milista);

  printf("La lista contiene: %d elementos\n", numero_elementos(milista));


  eliminar(&milista, 3);
  eliminar(&milista, 10);

  mostrar(milista);


  printf("La lista contiene: %d elementos\n", numero_elementos(milista));

  return 0;
}

void insertar_al_final(struct nodo **milista, int num){

  struct nodo *nodotemporal = malloc(sizeof(struct nodo));
  struct nodo *ultimo = *milista;

  nodotemporal -> dato = num;
  nodotemporal -> siguiente = NULL;

	// Sí la lista no cuenta con ningún nodo, se creará el primero.
  if (*milista == NULL) {
    *milista = nodotemporal;
	return;
} else {

  // Recorre toda la lista y liga el nodotemporal al final de la lista.
  while (ultimo -> siguiente != NULL){
    ultimo = ultimo -> siguiente; // el bueno
  }

  ultimo -> siguiente = nodotemporal;
}

}

void mostrar(struct nodo *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}

void insertar_al_principio(struct nodo **milista, int num){

  struct nodo *temporal = malloc(sizeof(struct nodo));
  temporal -> dato = num;
  temporal -> siguiente = *milista;

  if (*milista == NULL) {
    *milista = temporal;
	return;
  } else {

    *milista = temporal;

  }

}

void eliminar(struct nodo **milista, int posicion){

    if(*milista == NULL){
      return;
    }

    struct nodo *temporal = *milista;

    if(posicion == 0){

      *milista = temporal -> siguiente;
      free(temporal);

    } else {

      for(int i = 0; temporal != NULL && i < posicion - 1; i++){
        temporal = temporal -> siguiente;
      }

      if(temporal == NULL || temporal -> siguiente == NULL){
        return;
      }

      struct nodo *siguiente = temporal -> siguiente -> siguiente;

      free(temporal -> siguiente);

      temporal -> siguiente = siguiente;

    }

}

int numero_elementos(struct nodo *milista){

  int tam = 0;
  while (milista != NULL) {
    milista = milista -> siguiente;
    tam++;
  }
  return tam;
}
