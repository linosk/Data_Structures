CC = gcc
CFLAGS = -pedantic -Wextra -Wall

CFILES = main.c linkedlist.c
OFILES = main.o linkedlist.o

OUTPUT = datastructures

.PHONY: all
$(OUTPUT): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(OUTPUT)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	rm *.o datastructures