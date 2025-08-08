/* passback .c */
/* tests function which returns two values */
#include<stdio.h>
/* Function prototype */
void rets2(int *px, int *py);

main()
{
	int x, y;      /* no values given these variables */
	rets2( &x, &y );    /* addresses passed to function */
	printf(" first is %d, second is %d.", x, y);  
	return 0;
} 
/* rets2() */
/* returns two numbers */
void rets2(int *px, int *py)
{
   *px =3;    /* assigns contents of px value of 3 */
   *py =5;    /* assigns contents of py value of 5 */
} 

//code run
