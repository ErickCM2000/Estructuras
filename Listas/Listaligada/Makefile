listaligada.o: listaligada.c
	gcc listaligada.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o listaligada.o
	gcc main.o listaligada.o

run: a.out
	./a.out

clean:
	rm -f *.o a.out
