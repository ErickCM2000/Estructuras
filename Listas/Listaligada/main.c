// Aquí van las instrucciones del programa

#include "listaligada.h"

int main(void) {

  struct nodo *milista = NULL;

  insertar_al_principio(&milista, 10);
  insertar_al_principio(&milista, 20);
  insertar_al_principio(&milista, 30);
  insertar_al_principio(&milista, 40);
  insertar_al_principio(&milista, 50);
  insertar_al_principio(&milista, 60);
  insertar_al_principio(&milista, 70);

  mostrar(milista);

  printf("La lista contiene: %d elementos\n", numero_elementos(milista));


  eliminar(&milista, 3);
  eliminar(&milista, 10);

  mostrar(milista);


  printf("La lista contiene: %d elementos\n", numero_elementos(milista));

  return 0;
}
