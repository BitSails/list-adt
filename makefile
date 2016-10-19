#https://www.youtube.com/watch?v=aw9wHbFTnAQ 
CFLAGS=-std=c++14 -c -Wall

all: list.out

list.out: client.o list.o
	g++ client.o list.o -o list.out

client.o: client.cpp
	g++ $(CFLAGS) client.cpp

list.o: list.cpp
	g++ $(CFLAGS) list.cpp

run:
	./list.out

clean:
	rm -f list.out list.o client.o 
