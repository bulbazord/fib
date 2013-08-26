PREFIX?=/usr/local
CFLAGS=-g -Wall
LDFLAGS=-lm -lgmp


all: fib

fib: fib.c
	$(CC) $(CFLAGS) -o fib fib.c $(LDFLAGS) 

install: all
	install -d $(DESTDIR)/$(PREFIX)/bin/
	install fib $(DESTDIR)/$(PREFIX)/bin/

clean:
	rm -f fib
