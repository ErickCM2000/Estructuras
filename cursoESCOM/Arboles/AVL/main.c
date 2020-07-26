#include "arbolAVL.h"

int main(void) {

   struct AVL *raiz = NULL;

	raiz = insertar(raiz, 10);
	raiz = insertar(raiz, 20);
	raiz = insertar(raiz, 30);
	raiz = insertar(raiz, 40);
	raiz = insertar(raiz, 50);
	raiz = insertar(raiz, 60);
	raiz = insertar(raiz, 70);
	raiz = insertar(raiz, 80);
	raiz = insertar(raiz, 90);

	mostrar(raiz);

	printf("\n%d\n", buscar(raiz, 10));
	printf("%d\n\n", buscar(raiz, 50));

	return 0;
}
