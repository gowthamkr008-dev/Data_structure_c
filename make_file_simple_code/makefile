src := $(wildcard *.c)
obj := $(patsubst %.c,%.o,$(src))

calculator.out: $(obj)
    gcc -o $@ $^