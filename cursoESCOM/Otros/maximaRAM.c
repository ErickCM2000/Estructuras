// ¿cuánta memoria RAM tengo disponiblr

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {

  unsigned long long int memoria_disponible = 1;
  void *ptr = NULL;


  do {

    ptr = malloc(1);
    if(ptr != NULL){
      memoria_disponible++;
    }
    printf("%llu \n",memoria_disponible);

  } while(ptr != NULL);

  printf("%llu",memoria_disponible);





  return 0;
}
