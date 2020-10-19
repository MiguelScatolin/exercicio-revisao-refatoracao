CC=g++
CFLAGS=-I.
DEPS = Empregado.hpp Vendedor.hpp Engenheiro.hpp
OBJ = main.o Empregado.o Vendedor.o Engenheiro.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o exercicio $(OBJ)

clean:
	rm -f *.o