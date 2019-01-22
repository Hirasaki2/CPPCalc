# build an executable named myprog from myprog.c
all: math.cpp menu.cpp calc.cpp 
	g++ -g -Wall -o math math.cpp

clean: 
	$(RM) math
