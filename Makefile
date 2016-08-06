# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -std=c++11 -pedantic -O2 -Wall -lwinmm -static-libgcc
# CFLAGS= -std=c++11 -pedantic -O2 -Wall -static-libgcc
OBJECTS = main.o Angulo.o
TARGET = AgloGen3D.exe

AgloGen3D.exe: $(OBJECTS) 
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

Angulo.o: ./src/Angulo.cpp ./include/Angulo.hpp
	$(CC) $(CFLAGS) -c ./src/Angulo.cpp 

main.o: ./src/main.cpp ./include/Angulo.hpp
	$(CC) $(CFLAGS) -c ./src/main.cpp 

clean:
	rm $(OBJECTS) $(TARGET)
