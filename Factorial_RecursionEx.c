#include<stdio.h>

int fact(int n);

int main(void){

    int number;

    do{
        printf("Enter the number: ");
        scanf("%d",&number);
    }
    while(number<0);

    int result = fact(number); //call the factorial function
    printf("The factorial of %d is %d\n",number,result);
}

int fact(int n){

//base case
if(n == 0){
    return 1;
}

else{
//recursive case

return n * fact(n-1);

}


}