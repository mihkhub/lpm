CC=gcc
BIN=qsort
all: $(BIN)

$(BIN):	$(BIN).c
	$(CC) -O3 -Wall -g $^ -o $@

clean:
	$(RM) $(BIN)