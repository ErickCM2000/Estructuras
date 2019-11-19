// Aquí van las implementaciones de las funciones declaradas

#include "listaligada.h"

void mostrar(struct nodo *milista){

  while (milista != NULL) {
    printf("%d\n", milista -> dato);
    milista = milista -> siguiente;
  }

}

void insertaralprincipio(struct nodo **milista, int num){

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
