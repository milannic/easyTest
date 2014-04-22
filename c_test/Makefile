
CFALGS= -Wall -c
LDFLAGS=-rdynamic
CPP= g++
CC= gcc


PROGRAM= test.out

test.out:test.o
	$(CC) $(LDFLAGS) $< -o $@

.c.o:
	$(CC) $(CFALGS) $< -o $@

.PHONY:clean

clean:
	rm $(PROGRAM)
	rm *.o

.PHONY:run
run:
	./test.out
