#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[]){

if(argc != 2){
    printf("Please Provide a word.\n");
    return 1;
}

    char *str = argv[1];
    printf("Input: ");
    fgets(str,sizeof(str),stdin);

for (int i = 0,len = strlen(str); i < len; i++) {
        if (!isalpha(str[i])) {
            printf("Invalid input: only alphabetic characters are allowed.\n");
            return 2;
        }
}

    for (int i =1,len = strlen(str); i<len;i++){

        if(str[i] < str[i - 1]){
            printf("No \n");
            return 0;
        }
    }

        printf("Yes \n");
}
