#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  struct nodo *siguiente;
};


void push(struct nodo **pila, int num);
int pop(struct nodo **pila);
int top(struct nodo **pila);

int main(int argc, char const *argv[]) {

  struct nodo *pila = NULL;

  push(&pila, 10);
  push(&pila, 20);
  push(&pila, 30);
  push(&pila, 40);
  push(&pila, 50);

  printf("El elemento eliminado es: %d\n", pop(&pila));
  printf("El elemento a la cima de la pila es: %d\n", top(&pila));

  return 0;
}

void push(struct nodo **pila, int num){

  if(pila == NULL){
    return;
  }

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

int pop(struct nodo **pila){
  int valor = (**pila).dato;
  return valor;
}

int top(struct nodo **pila){
  int valor = (**pila).dato;
  return valor;
}
