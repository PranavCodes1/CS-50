// Capitalizes a string

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main(void)
{
    // Get a string
    char *s;
    printf("Enter string: ");
    scanf("%s",s);

if (s == NULL)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Free memory
    free(t);
    return 0;
}