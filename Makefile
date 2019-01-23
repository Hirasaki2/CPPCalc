# build an executable named myprog from myprog.c
all: math.cpp cpp/*.cpp 
	g++ -g -Wall math.cpp cpp/*.cpp -o math

clean: 
	$(RM) math
