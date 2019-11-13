#include <stdio.h>
#include <stdlib.h>

void insertar();
void mostrar();
void eliminar();

struct Lista{
    int actual; // cantidad de elementos EXISTENTES en la lista
    int size; // tamaño ocupado por la lista
    int *dato; // elemento almacenado en la lista
};

int main(int argc, char const *argv[])
{

    struct Lista milista;
    milista.actual = 0;
    struct Lista temp;
    int e;

    insertar(&milista, &temp);
    insertar(&milista, &temp);
    insertar(&milista, &temp);
    insertar(&milista, &temp);
    insertar(&milista, &temp);

    /*printf("\n%d\n", *(milista.dato));
    printf("\n%d\n", *(milista.dato+1));
    printf("\n%d\n", *(milista.dato+2));
    printf("\n%d\n", *(milista.dato+3));
    printf("\n%d\n", *(milista.dato+4));*/

    mostrar(&milista);

    //eliminar(&milista, &temp, 3);
    //*(milista.dato+2) = *(milista.dato+3);
    //milista.actual--;

    /*printf("\n%d\n", *(milista.dato));
    printf("\n%d\n", *(milista.dato+1));
    printf("\n%d\n", *(milista.dato+2));*/

    //mostrar(&milista);

    printf("\nlist size: %d\n", (milista.size));

    return 0;
}

void insertar(struct Lista *l, struct Lista *t){

    if (l->actual == 0)
    {

        l->dato = (int *)malloc(1*sizeof(int));

        if (l->dato == NULL)
            printf ("Error de Mem.");

        scanf("\n%d",l->dato+l->actual);

        l->actual++;

        l->size = 1;

    } else{

        if (l->actual<l->size)
        {
            scanf("\n%d",l->dato+l->actual);
            l->actual++;
        }else{

            t->dato = (int *)malloc((2*(l->size))*sizeof(int));
            if (t->dato==NULL)
                printf ("Error de Mem.");
            for (int j = 0; j < l->size; ++j)
            {
                *(t->dato+j) = *(l->dato+j);
            }

            t->actual = l->actual;
            t->size = l->size * 2;
            l->actual = t->actual;
            l->size = t->size;
            l->dato = t->dato;

            scanf("\n%d",l->dato+l->actual);
            l->actual++;
        }
    }
}

void mostrar(struct Lista *l){

    for (int i = 0; i < l->actual; ++i)
    {
        printf("\n%d\n", *(l->dato + i));
    }
}

void eliminar(struct Lista *l, struct Lista *t, int el){

    //for (int j = el; j < l->size; ++j)
    //{
        *(l->dato + 2) = *(l->dato + 3);
    //}

    l->actual--;

    /*if (l->actual<=((l->size)/2))
    {
        t->dato = (int *)malloc(((l->size)/2)*sizeof(int));
            if (t->dato==NULL)
                printf ("Error de Mem.");
            for (int j = 0; j < l->size; ++j)
            {
                *(t->dato+j) = *(l->dato+j);
            }
            t->actual = l->actual;
            t->size = l->size*2;
            l->actual = t->actual;
            l->size = t->size;
            l->dato = t->dato;
    }*/
}
