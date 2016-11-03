proj2: proj2.o list.o queue.o
	gcc proj2.o list.o queue.o –o proj2
proj2.o: proj2.c list.h queue.h
list.o: list.c list.h
queue.o: queue.c queue.h

