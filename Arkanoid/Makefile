CC=g++
CFLAGS=-std=c++17 -O2

clean: 
	rm *.o Arkanoid ../*.hpp.gch

install:
	install ./Arkanoid /usr/local/bin

uninstall:
	rm /usr/local/bin/Arkanoid
	
Generate_Libraries:
	g++ -c ../*.cpp ../*.hpp
	
	
all: Generate_Libraries
	g++ *.o -o Arkanoid -lsfml-graphics -lsfml-window -lsfml-system

