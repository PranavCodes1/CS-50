#include<stdio.h>

int main (void) {

int n = 50;

int *ptr = &n;

printf("%d\n", *ptr);  // *ptr prints the value at n and only ptr will print the address of n.

}
