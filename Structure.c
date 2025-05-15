// Implements a phone book with structs


#include <stdio.h>
#include <string.h>

typedef struct
{
  const char *name;
   const char *number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Ram";
    people[0].number = "987654321";

    people[1].name = "John";
    people[1].number = "123456789";

    people[2].name = "Kim";
    people[2].number = "2468102333";

    // Search for name
    char name[100];
    printf("Enter name: ");
    scanf("%s",name);


    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

