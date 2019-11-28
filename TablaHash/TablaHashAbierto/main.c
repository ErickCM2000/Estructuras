#include "hashAbierto.h"

int
main(void)
{
	int busqueda;
	struct TablaHash *tabla = NULL;

	AgregarDato(&tabla,"esta");
	AgregarDato(&tabla,"es");
	AgregarDato(&tabla,"una");
	AgregarDato(&tabla,"cadena");

	busqueda = BuscarDato(tabla,"cadena");
	printf("\t%d\n",busqueda);

	EliminarDato(&tabla,"cadena");

	busqueda = BuscarDato(tabla,"cadena");
	printf("\t%d\n",busqueda);

return 0;
}
