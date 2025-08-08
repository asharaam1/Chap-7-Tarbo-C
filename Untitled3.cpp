/* addtotwo.c */
/* tests function which adds constant to two values */
#include<stdio.h>
/* Function prototype */
void addcon(int *px, int *py);

main() 
{
  int x=4, y=7;
  addcon( &x,&y);
  printf("first is %d, second is %d", x, y);
  return 0;
} 
/*addcon()*/
/* adds constant to values in calling program */
void addcon(int *px, int *py) 

{
    *px = *px +10;
    *py = *py +10;
} 
