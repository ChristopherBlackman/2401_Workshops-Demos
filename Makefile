

build:  sortingAlgorithm.o main.o
	gcc -o main main.o sortingAlgorithm.o


main.o: main.c
	gcc -c main.c

sortingAlgorithm.o : sortingAlgorithm.c
	gcc -c sortingAlgorithm.c sortingAlgorithm.h

run: build
	./main

clean:
	rm *.o
	rm *.gch
	rm main
