/* sortstr.c */
/* sorts list of names typed in to array */
#include <stdio.h> /* For printf, fgets */
#include <string.h> /* For strcmp, strcspn */
#define MAXNUM 30 /* maximum number of names */
#define MAXLEN 81 /* maximum length of names */

int main()
{
    static char name[MAXNUM][MAXLEN]; /* array of strings */
    char *ptr[MAXNUM]; /* array of pointers to strings */
    char *temp; /* extra pointer */
    int count = 0; /* how many names */
    int in, out; /* sorting indexes */
    while (count < MAXNUM) /* get names */
    {
        printf("Name %d: ", count + 1);
        if (fgets(name[count], MAXLEN, stdin) != NULL) /* Line 19 */
        {
            name[count][strcspn(name[count], "\n")] = '\0'; /* Line 20: Fixed indexing */
            if (strlen(name[count]) == 0)
                break; /* quit if no name */
            ptr[count++] = name[count]; /* each ptr points to name */
        }
        else
        {
            break; /* Exit on input failure */
        }
    }
    /* sort the pointers */
    for (out = 0; out < count - 1; out++)
    {
        for (in = out + 1; in < count; in++)
        {
            if (strcmp(ptr[out], ptr[in]) > 0)
            {
                /* if any smaller, swap pointers */
                temp = ptr[in];
                ptr[in] = ptr[out];
                ptr[out] = temp;
            }
        }
    }
    printf("\nSorted list:\n");
    for (out = 0; out < count; out++)
        printf("Name %d: %s\n", out + 1, ptr[out]);
    return 0;
}
