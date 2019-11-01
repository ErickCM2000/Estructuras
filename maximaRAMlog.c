#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {

  unsigned long long int multiplicador = 1, cont = 0;
  int *ptr;


  do {

    ptr = malloc(multiplicador);

    if(ptr == NULL){
        multiplicador /= 2;
        ptr = malloc(multiplicador);
    }

    multiplicador *= 2;
    cont++;

    printf("memoria disponible: %llu , operaciones: %llu\n", multiplicador, cont);

  } while( ptr != NULL) ;


  return 0;
}
