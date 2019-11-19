// Aquí van las cabeceras de las funciones declaradas

#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  struct nodo *siguiente;
};

void mostrar(struct nodo *milista);
void insertar_al_principio(struct nodo **lista, int num);
void eliminar(struct nodo **milista, int posicion);
int numero_elementos(struct nodo *milista);

#endif
