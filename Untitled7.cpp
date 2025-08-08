/* ptrtemp2.c */
/* averages arbitrary number of temperature */ 
/*uses pointer variables */
main() 
{
  float temper[40];                /* array decleration */
  float sum=0.0;
  int num, day=0;
  float *ptr;                     /* pointer variable */
  ptr = temper;               /* set pointer to array */
  do                          /* put temps in array */
  {
   printf ("Enter temperature for day %d:", day++) 
   scanf("%f", ptr);
} 
while ( *(ptr++) > 0 );
ptr = temper;                /* reset pointer to array */
num =day _1;                 /* number of temps entered */
for (day=0; day<num; day++) /* calculate average */ 
    sum+=*(ptr++);
    printf("Average is %.1f", sum/num);
} 
   
  

