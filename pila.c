#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void push(struct nodo **pila, int num);
void pop(struct nodo *pila);
void mostrar(struct nodo *pila);

int main(int argc, char const *argv[]) {

  struct nodo *pila = NULL;

  push(&pila, 10);
  push(&pila, 20);
  push(&pila, 30);
  push(&pila, 40);
  push(&pila, 50);
  push(&pila, 60);
  push(&pila, 70);

  mostrar(pila);



  return 0;
}

void push(struct nodo **pila, int num){

  if(*pila == NULL){ //si la pila no cuenta con ningún nodo, se creará el primero.
    *pila = malloc(sizeof(struct nodo));
    return;
  } else {

    struct nodo *temporal = malloc(sizeof(struct nodo));
    temporal -> dato = num;
    temporal -> siguiente = *pila;
    *pila = temporal;

  }

}


void mostrar(struct nodo *pila){
  while(pila != NULL){
    printf("%d\n", pila -> dato);
    pila = pila -> siguiente;
  }
}
