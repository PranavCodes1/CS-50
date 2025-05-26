//Swap two integers using pointers

#include<stdio.h>


void swap(int *a, int *b);


int main(void){

int x,y;

printf("Enter first number: ");
scanf("%d",&x);

printf("Enter second number: ");
scanf("%d",&y);

swap(&x,&y);
printf("the swap numbers are:%d and %d \n",x,y);

}

void swap(int *a, int *b){
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;   

}