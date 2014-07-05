
CFALGS=-Wall -c

SOURCE=$(shell ls *.cpp)
PROGRAM=$(subst .cpp,.out,$(SOURCE))
CPP=g++

all:$(PROGRAM)

%.out:%.o
	$(CPP) $< -o $@

%.o:%.cpp
	$(CPP) $(CFALGS) $< -o $@



.PHONY:clean

clean:
	rm $(PROGRAM)

.PHONY:list
list:
	@echo $(SOURCE)
	@echo $(PROGRAM)

.PHONY:run
run:
	./test.out
