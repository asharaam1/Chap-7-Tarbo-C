/* addarray.c */
/* tests function to add constant to array values */
#include <stdio.h> /* Added for printf */
#define SIZE 5
/* Function prototype for addcon */
void addcon(int *ptr, int num, int con); /* Added prototype */
int main()
{
    static int array[SIZE] = {3, 5, 7, 9, 11};
    int konst = 0; /* declare konst */
    int j; /* declare j */
    addcon(array, SIZE, konst); /* call funct to add konst */
    for (j = 0; j < SIZE; j++) /* fix case of J to j */
        printf("%d ", *(array + j)); /* line 13 */
    printf("\n"); /* add newline for clean output */
    return 0; /* return for main */
}

/* addcon() */
/* adds constant to each element of array */
void addcon(int *ptr, int num, int con)
{
    int k;
    for (k = 0; k < num; k++) /* add con to each element */
        *(ptr + k) = *(ptr + k) + con; /* fix pointer arithmetic */
}

//code run
