a.out: main.o
	gcc -o a.out main.o
main.o: main.c
	gcc -c main.c
clean:
	rm a.out main.o
