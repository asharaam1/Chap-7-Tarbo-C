/* comparep.c */
/* compares word typed in with word in program */
/* uses pointers */
#include <stdio.h> /* For printf, fgets */
#include <string.h> /* For strcmp, strcspn */
#define MAX 5 /* Define MAX for array size */
#define SIZE 40 /* Define SIZE for name array */

int main()
{
    int dex;
    int enter = 0;
    char name[SIZE];
    static char *list[MAX] = { /* Fixed typo from [ist to list, removed comma */
        "KATRINA",
        "NIGEL",
        "ALISTAIR",
        "FRANCESCA",
        "GUSTAV"
    };
    printf("Enter your name: "); /* Removed extra spaces, no newline */
    if (fgets(name, SIZE, stdin) != NULL) { /* Replaced gets with fgets */
        name[strcspn(name, "\n")] = '\0'; /* Remove trailing newline */
        for (dex = 0; dex < MAX; dex++) { /* Fixed loop bracing */
            if (strcmp(list[dex], name) == 0) { /* If match */
                enter = 1; /* Set flag */
                break; /* Exit loop on match */
            }
        }
        if (enter == 1) /* If flag set */
            printf("You may enter, oh honored one.\n"); /* Fixed typo, added newline */
        else /* Otherwise */
            printf("Guards: Remove this person.\n"); /* Fixed capitalization, added newline */
    } else {
        printf("Error reading input.\n");
    }
    return 0; /* Added return */
}

// code run
