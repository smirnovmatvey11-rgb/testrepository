# all:
# 	g++ main.cpp func.cpp -o program
# main.o:
# 	g++ main.o app 
all: app

app: main.o func.o
	g++ -o main main.o func.o

main.o: main.cpp func.h
	g++ -c main.cpp -o main.o

func.o: func.cpp func.h
	g++ -c func.cpp -o func.o

test: app
	./app