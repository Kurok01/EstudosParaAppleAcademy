# Makefile para compilar TrabalhoAlgoritmos

# Compilador e flags
CC = gcc
CFLAGS = -Wall -g

# Objetos e executável
OBJ = main.o decifracodigo.o funcval.o
BIN = TrabalhoAlgoritmos

# Alvos principais
.PHONY: all clean

# Alvo padrão: compila o executável
all: $(BIN)

# Regra para gerar o executável a partir dos objetos
$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN)

# Regras para gerar cada arquivo objeto a partir dos arquivos fonte
main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

decifracodigo.o: decifracodigo.c
	$(CC) -c decifracodigo.c -o decifracodigo.o $(CFLAGS)

funcval.o: funcval.c
	$(CC) -c funcval.c -o funcval.o $(CFLAGS)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJ) $(BIN)
