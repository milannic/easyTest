
CFALGS=-Wall -c

PROGRAM= test.out
CPP=g++

test.out:test.o
	$(CPP) $< -o $@

.cpp.o:
	$(CPP) $(CFALGS) $< -o $@


.PHONY:clean

clean:
	rm $(PROGRAM)

.PHONY:run
run:
	./test.out
