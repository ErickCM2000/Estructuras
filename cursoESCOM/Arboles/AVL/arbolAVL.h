#ifndef __ARBOLAVL_H__
#define __ARBOLAVL_H__

#include <stdio.h>
#include <stdlib.h>

struct AVL{

	int dato;
	int fe;
	struct AVL *hijoDerecho;
	struct AVL *hijoIzquierdo;
};

struct AVL* insertar(struct AVL *raizArbol, int datoInsertar);
struct AVL* rotacionDerecha(struct AVL *raizDesbalanceada);
struct AVL* rotacionIzquierda(struct AVL *raizDesbalanceada);
int calcularAltura(struct AVL *raiz);
int calcularFB(struct AVL *raiz);
int buscar(struct AVL *raiz, int datoABuscar);
void mostrar (struct AVL *raiz);

#endif
