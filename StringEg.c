#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
	
    printf("After: ");	
    for(int i = 0, n = strlen(str); i<n; i++){
    printf("%c",toupper(str[i]));
    }
    printf("\n");
    return 0;
    }

