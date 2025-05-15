#include <stdio.h>

int main(void) {
    int numbers[] = {20,500,10,5,100,1,50};

    int i,n;

    printf("Enter the number to search : ");
    scanf("%d",&n);



    for(i = 0; i < 7; i++) {
        if(numbers[i] == n) {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
    
}
