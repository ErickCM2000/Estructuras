// Aquí van las implementaciones de las funciones declaradas

#include "listaligadacircular.h"

void mostrar(struct ListaLigada *milista){

  struct ListaLigada *temporal = milista;

  if(milista != NULL){

    do{
      printf("%d\n", temporal -> dato);
      temporal = temporal -> siguiente;
    } while(temporal != milista);

  }

}

void insertaralprincipio(struct ListaLigada **milista, int num){

  struct ListaLigada *ultimo = malloc(sizeof(struct ListaLigada));
  struct ListaLigada *temporal = *milista;
  ultimo -> dato = num;
  ultimo -> siguiente = *milista;


  if (*milista != NULL) {

    while(temporal -> siguiente != *milista){
      temporal = temporal -> siguiente;
    }

    temporal -> siguiente = ultimo;


  } else {

    temporal -> siguiente = ultimo;

  }
  *milista = ultimo;


}

void eliminar(struct ListaLigada **milista, int posicion){

    if(*milista == NULL){
      return;
    }

    struct ListaLigada *temporal = *milista;

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

      struct ListaLigada *siguiente = temporal -> siguiente -> siguiente;

      free(temporal -> siguiente);

      temporal -> siguiente = siguiente;

    }

}

int numero_elementos(struct ListaLigada *milista){

  int tam = 0;
  while (milista != NULL) {
    milista = milista -> siguiente;
    tam++;
  }
  return tam;
}
