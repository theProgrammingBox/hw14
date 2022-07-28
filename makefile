CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = hw14.o doublyLinkedList.o
FILES = hw14.cpp doublyLinkedList.h doublyLinkedList.cpp

all: hw14

hw14: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o hw14

hw14.o: hw14.cpp doublyLinkedList.o
	$(CC) $(FLAGS) -c hw14.cpp

doublyLinkedList.o: doublyLinkedList.cpp doublyLinkedList.h
	$(CC) $(FLAGS) -c doublyLinkedList.cpp

tar:
	tar -cf hw14.tar hw14.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr hw14

sudoClean:
	rm *.o *.scr hw14