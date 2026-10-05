calculator.out: main.o add.o sub.o div.o mul.o
	gcc -o $@ $^
# 	gcc -o $@ main.o add.o sub.o div.o mul.o

main.o: main.c
	gcc -c $^ $e
# 	gcc -c main.c -o main.o

add.o: add.c
	gcc -c $^ 
# 	gcc -c add.c -o add.o

sub.o: sub.c
	gcc -c $^ 
# 	gcc -c sub.c -o sub.o

div.o: div.c
	gcc -c $^
# 	gcc -c div.c -o div.o

mul.o: mul.c
	gcc -c $^ 
# 	gcc -c mul.c -o mul.o

clean:
	rm -f *.o $@  
# 	use clear the objective files


# 	-o create objective file

# $@ the target name

# $^ all prerequsities

# $e 


# file name is not a makefile use the command
#  make -f <filename>
#  clean use make clean 
#  clean objective files make clean -f <filename>


# create a variable
# src := $(wildcard *.c)

# obj := $(patsubst %c,%o,$(src))
# create .c t .o files

# calc.out : $(obj)
# 	gcc -o $e $^