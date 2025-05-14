//Check if a lowercase strings characters are in alphabetical order. If yes,print"Yes" and If no, print"No".

#include<stdio.h>
#include<string.h>

int main(void){
    char str[20];
    printf("Input: ");
    fgets(str,sizeof(str),stdin);


    for (int i =0; i<strlen(str);i++){

        if(str[i] < str[i - 1]){
            printf("No \n");
            return 0;
        }
    }

        printf("Yes \n");
}