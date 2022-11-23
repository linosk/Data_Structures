CC = gcc
CFLAGS = -pedantic -Wextra -Wall

CFILES = main.c linkedlist.c stack.c queue.c hash_map.c
OFILES = main.o linkedlist.o stack.o queue.o hash_map.o

OUTPUT = datastructures

.PHONY: all
$(OUTPUT): $(OFILES)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	rm -rf $(OFILES) $(OUTPUT)