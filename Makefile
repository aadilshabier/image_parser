CFLAGS=-Iinclude -Wall -Wextra -std=c11 -ggdb

.PHONY: all clean
all: build/png.o

build/png.o: src/png.c include/png.h include/common.h
	$(CC) $(CFLAGS) -c -o build/png.o src/png.c

clean:
	rm build/*.o

