CC=gcc
CFLAGS=-O3 -std=gnu99 -Wall -g
BIN=compar
all: $(BIN)

$(BIN):	$(BIN).c
	$(CC) $(CFLAGS)  $^ -o $@

clean:
	$(RM) $(BIN)
