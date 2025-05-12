#include<stdio.h>


void print_row(int bricks){

for(int i = 0; i<bricks;i++){
    printf("#");
}
printf("\n");
}



int main (void) {

int height;

printf("What is the height of pyramid: ");
scanf("%d",&height);

for(int i=0; i<=height;i++){
print_row(i);
}


}