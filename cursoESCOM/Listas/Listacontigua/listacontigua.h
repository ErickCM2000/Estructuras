#ifndef __LISTACONTIGUA_H__
#define __LISTACONTIGUA_H__

#include <stdio.h>
#include <stdlib.h>

struct ListaContigua{
  int *datos;
  int actual;
  int cuantos;
};

void insertar (struct ListaContigua **, int);
void eliminar (struct ListaContigua **, int);
void mostrar (struct ListaContigua *);

#endif
