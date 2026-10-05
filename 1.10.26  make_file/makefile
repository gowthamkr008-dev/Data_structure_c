calculator.out: main.o add.o sub.o div.o mul.o
	gcc -o calculator.out main.o add.o sub.o div.o mul.o

main.o: main.c
	gcc -c main.c -o main.o

add.o: add.c
	gcc -c add.c -o add.o

sub.o: sub.c
	gcc -c sub.c -o sub.o

div.o: div.c
	gcc -c div.c -o div.o

mul.o: mul.c
	gcc -c mul.c -o mul.o

clean:
	rm -f *.o calculator.out

