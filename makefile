CC=g++
CFLAGS=-I.
DEPS = Empregado.hpp
OBJ = main.o Vendedor.o Engenheiro.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o exercicio main.o Vendedor.o Engenheiro.o

clean:
	rm -f *.o