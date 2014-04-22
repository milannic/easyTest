
CFALGS=-Wall -c

PROGRAM= test
CPP=g++

test:test.o
	$(CPP) $< -o $@

.cpp.o:
	$(CPP) $(CFALGS) $< -o $@


.PHONY:clean

clean:
	rm $(PROGRAM)

.PHONY:run
run:
	./test
