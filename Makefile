

build:  sortingAlgorithm.o main.o
	gcc -o main main.o sortingAlgorithm.o


main.o: main.c
	gcc -c main.c

sortingAlgorithm.o : sortingAlgorithm.c sortingAlgorithm.h
	gcc -c sortingAlgorithm.c

run: build
	./main

clean:
	rm *.o
	rm main
