
#include<stdio.h>


//Create an arrayof size 5 where each element is two times the previous and the first element is 1.Print the array,integer by integer.


int main(void){

int numbers[5];

numbers[0] = 1;
for(int i =1; i<5; i++){
numbers[i] = numbers[i -1] * 2;
}


// it is same as int numbers[5] ={1,2,4,8,16};

for(int i = 0; i < 5; i++){
printf("%i\n",numbers[i]);
}
}