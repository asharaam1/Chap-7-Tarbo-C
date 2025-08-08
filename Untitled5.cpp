/* arrays.c */
/* prints out values from array */
#include <stdio.h>

main()
{
 static int nums [] = {92,81,70,69,58};
 int dex;
 for (dex=0; dex<5; dex++) 
    printf("%d\n", nums [dex]);
} 

//Code run in Dev-C++
