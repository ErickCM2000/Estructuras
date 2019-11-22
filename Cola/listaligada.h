// Aquí van las cabeceras de las funciones declaradas

#ifndef __LISTALIGADA_H__
#define __LISTALIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct Cola{
  int dato;
  struct Cola *siguiente;
};

void mostrar(struct Cola **mcola);
void insertar(struct Cola **mcola, int num);
int eliminar(struct Cola **mcola);

#endif
