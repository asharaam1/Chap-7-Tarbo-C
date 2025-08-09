/* double.c */
/* shows use of 2-dimensional arrays */
#include <stdio.h>
#define ROW 4
#define COLS 5

int main()
{
    static int table[ROW][COLS] =
        {
            {13, 15, 17, 19, 21},
            {20, 22, 24, 26, 28},
            {31, 33, 35, 37, 39},
            {40, 42, 44, 46, 48}
        };
    int konst = 10;
    int j, k;
    for (j = 0; j < ROW; j++)
    {
        for (k = 0; k < COLS; k++)
            table[j][k] = table[j][k] + konst;
    }
    for (j = 0; j < ROW; j++)
    {
        for (k = 0; k < COLS; k++)
            printf("%d ", table[j][k]);
        printf("\n");
    }
    return 0;
}

//code runs
