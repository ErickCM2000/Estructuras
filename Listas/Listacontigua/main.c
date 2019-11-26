#include "listacontigua.h"

int main(void){

  struct ListaContigua *lista = NULL;

  insertar (&lista, 10);
  insertar (&lista, 20);
  insertar (&lista, 30);
  insertar (&lista, 40);
  insertar (&lista, 50);
  insertar (&lista, 60);
  insertar (&lista, 70);
  insertar (&lista, 80);
  insertar (&lista, 90);

  eliminar (&lista, 10);
  eliminar (&lista, 70);
  eliminar (&lista, 90);


  mostrar (lista);

  return 0;
}
