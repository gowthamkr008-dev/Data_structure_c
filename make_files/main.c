#include <stdio.h>
/* make file */
int add(int, int);
int sub(int ,int);
int mul(int,int);
int div(int,int);

int main(){
  int a = add(10,20);
  int b = sub(10,20);
  int c = mul(10,20);
  int d = div(10,5);

  printf("add =  %d\nsub = %d\nmul = %d\nDiv = %d\n",a,b,c,d);
}


/*
generate our own file 


use this gcc -o claculate


*/