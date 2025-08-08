/* addin.c */
/* shows use of pinters within program */ 
#include<stdio.h>
main() 
{
  int x=4, y=7;
  int *px, *py;     /* pointer vaiabLes */
  printf("x is %d, y is %d. \n", x, y);
  px =&x;                         /* put adresses of numbers */
  py =&y;                         /*     in pointer */
  *px =*px + 10;                  /* add constant to contants */
  *py = *py +10;                  /* of pointers */
  printf("x is %d, y is %d.\n", x, y);
}
  
//Code run in Dev-C++
