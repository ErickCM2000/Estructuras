#include "stdio.h"
#include "stdlib.h"

struct nodo{
  int dato;
  struct nodo *anterior;
  struct nodo *siguiente;
};

void insertar_al_final(struct nodo **milista, int num);
void mostrar(struct nodo *milista);

int main(int argc, char const *argv[]) {

  struct nodo *milista = NULL;

  insertar_al_final(&milista, 10);
  insertar_al_final(&milista, 20);
  insertar_al_final(&milista, 30);
  insertar_al_final(&milista, 40);
  insertar_al_final(&milista, 50);
  insertar_al_final(&milista, 60);

  mostrar(milista);

  return 0;
}

void insertar_al_final(struct nodo **milista, int num){

  struct nodo *temporal = malloc(sizeof(struct nodo));
  temporal -> dato = num;
  temporal -> anterior = *milista;
  temporal -> siguiente = NULL;

  struct nodo *ultimo = *milista;


  if(*milista == NULL){
    temporal -> anterior = NULL;
    *milista = temporal;
    return;
  } else {

    while(ultimo -> siguiente != NULL){
      ultimo = ultimo -> siguiente;
    }
    ultimo -> siguiente = temporal;
    temporal -> anterior = ultimo;
  }

}

void mostrar(struct nodo *milista){

  struct nodo *ultimo;
  printf("Recorrido normal. \n");
  while(milista != NULL){
    printf("%d\n", milista -> dato);
    ultimo = milista; // ultimo se va posicionando hasta el final de la lista.
    milista = milista -> siguiente;
  }

  printf("Recorrido al reves. \n");
  while(ultimo != NULL){
    printf("%d\n", ultimo -> dato);
    ultimo = ultimo -> anterior;
  }

}
