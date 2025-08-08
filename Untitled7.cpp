/* ptrtemp2.c */
/* averages arbitrary number of temperature */ 
/*uses pointer variables */
#include <stdio.h>

main() 
{
  float temper[4];                /* array decleration */
  float sum=0.0;
  int num, day=0;
  float *ptr;                     /* pointer variable */
  ptr = temper;               /* set pointer to array */
  do                          /* put temps in array */
	{
	   printf ("Enter temperature for day %d:", day);
	   scanf("%f", ptr);
	   if (*(ptr) <= 0) break; /* exit if non-positive temperature */
	   ptr++; /* increment pointer after scanf */
	   day++; /* increment day after valid input */
	} 
	while ( day < 4 );
	ptr = temper;                /* reset pointer to array */
	num =day;                 /* number of temps entered */
	if (num > 0) { /* avoid division by zero */
		for (day=0; day<num; day++) /* calculate average */
		sum+=*(ptr++);
		printf("Average is %.1f", sum/num);
	} else {
		printf("No valid temperatures entered.\n");
	}
} 
   
  //Code run
