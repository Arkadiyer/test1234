all: app

app: main.o funk.o
	g++ -o main main.o funk.o

main.o: main.cpp funk.h
	g++ -c main.cpp -o main.o

sum.o: funk.cpp funk.h
	g++ -c funk.cpp -o funk.o

test: app
	./app
