CC = gcc
CFLAGS = -pedantic -Wextra -Wall

CFILES = main.c linkedlist.c
OFILES = main.o linkedlist.o

OUTPUT = datastructures

.PHONY: all
$(OUTPUT): $(OFILES)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean
clean:
	rm -rf $(OFILES) $(OUTPUT)