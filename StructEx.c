#include<stdio.h>
#include<stdlib.h>

typedef struct{

    char name[20];
    int votes;
} candidate;





int main (void) {

const int num = 3;

candidate candidates[num];

//Populate the array with users input

for(int i = 0; i<num;i++){
    printf("Enter name of candidate: ");
    scanf("%s",candidates[i].name);

    printf("Enter the votes of candidate: ");
    scanf("%d",&candidates[i].votes);
}

int highest_vote = 0;

for(int i = 0; i < num;i++){

    if(candidates[i].votes > highest_vote){
        highest_vote = candidates[i].votes;
    }
}
printf("Highest vote is : %d\n",highest_vote);

for(int i=0; i<num; i++){
    if (candidates[i].votes == highest_vote){
        printf("The candidate is: %s\n",candidates[i].name);
    }
}
}