//código de Erick
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertar();
void mostrar();
struct Lista eliminar();

struct Lista{

	int dato;
	struct Lista *siguiente;
};

int main(void){

	struct Lista* milista=NULL;

	insertar(&milista);
	insertar(&milista);
	insertar(&milista);
	insertar(&milista);

	printf("------------------------\n");

	//*milista = eliminar(milista);
//*milista = eliminar(milista);
	//funciona más como una pila
	printf("------------------------\n");

	mostrar(milista);
}

void insertar(struct Lista **l){

	if(*l == NULL){ // razón por la cual no funcionaba
		*l = malloc(sizeof(struct Lista));
		return;
	}

	struct Lista* nuevo = malloc(sizeof(struct Lista));
	scanf("\n%d", &nuevo->dato);
	nuevo->siguiente = *l;
	*l = nuevo;
}

void mostrar(struct Lista *l){

	while(l != NULL){

		printf("%d\n", l->dato);

		l = l->siguiente;
	}
}

struct Lista eliminar(struct Lista *l){

	struct Lista* a;
	struct Lista* b = l;
	int p=0;

	int numaelim;

	scanf("\n%d", &numaelim);

	while(l->dato != numaelim){

		a = l;
		l = l->siguiente;

		p++;
	}

	if (p == 0)
	{

		l = l->siguiente;
		return *l;
	}else{
		a->siguiente = l->siguiente;
		free(l);
		return *b;
	}
}
