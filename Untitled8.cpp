 /* addarray.c */
  /* tests function to add constant to array values */
  #define SIZE 5
  main()
  {
	static  int array[SIZE] ={3,5,7,9,11};
	konst =0;                    /* constant to be added */
    addcon(array, SIZE,konst);   /* call funct to add konst */
	for(j=0;j<SIZE; J++)         /*print out array */  
	    printf ("%d " ,*(array+j));
} 
/* addcon() */
/* adds constant to each element of array */
addcon(ptr,num,com)
int *ptr;                   /* pointer to integer array */
int num;
int con; 
{
int k;
for(k=0; k<num; k++)        /* add konst to each eleme nt */ 
    *(ptr) = *(ptr++) +con;
} 
