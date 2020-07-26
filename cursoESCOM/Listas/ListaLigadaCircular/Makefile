listaligadacircular.o: listaligadacircular.c
	gcc listaligadacircular.c -c -Wall
main.o: main.c
	gcc main.c -c -Wall

a.out: main.o listaligadacircular.o
	gcc main.o listaligadacircular.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
