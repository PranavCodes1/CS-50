#include<stdio.h>
#include<string.h>


int main (void){

char *s;
char *t;

printf("Enter the first  string: ");
scanf("%s",s);

printf("Enter the second string: ");
scanf("%s",t);

if(strcmp(s,t) == 0){
    printf("Same \n");
}
else{
    printf("Different\n");
}

}