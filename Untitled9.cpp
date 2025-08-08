/* search.c */
/* searches string for a given character */
#include <stdio.h> /* For printf, puts */
#include <string.h> /* For strchr */
#include <conio.h> /* For getche */
#define SIZE 81

int main()
{
    char ch, line[SIZE], *ptr; /* Fixed declaration */
    puts("Enter the sentence to be searched: ");
    gets(line);
    printf("Enter character to search for: ");
    ch = getche();
    ptr = strchr(line, ch); /* Return pointer to char */
    printf("\nString starts at address %u.\n", line);
    printf("First occurrence of char is address %u.\n", ptr);
    if (ptr != NULL) {
        printf("This is position %d (starting from 0)\n", ptr - line);
    } else {
        printf("Character '%c' not found\n", ch);
    }
    return 0; /* Added return */
}

//code run
