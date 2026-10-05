# all:
# 	g++ main.cpp func.cpp -o program
# main.o:
# 	g++ main.o app 
all: app

app: main.o sum.o
	g++ -o main main.o sum.o

main.o: main.cpp sum.h
	g++ -c main.cpp -o main.o

sum.o: sum.cpp sum.h
	g++ -c sum.cpp -o sum.o

test: app
	./app