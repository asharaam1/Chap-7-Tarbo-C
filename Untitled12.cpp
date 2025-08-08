/*sortstr.c+ */ 
/* sorts list of names typed in to array */
#define MAXNUM 30               /* maximum number of names */
# define MAXLEN 81              /* maximum length of names */
main() 
{
 static char name [MAXNUM][MAXLEN];      /* array of strings */
 char * ptr[MAXNUM];                     /* array of pntrs to strings */
 char *temp;                            /* extra pointer */
 int count = 0;                          /* how many names */
 int in, out;                            /* shorting indexes */
 while( count < MAXNUM )                 /* get names */ 
 {
 printf ("Name %d: ", count+1);
 gets(name[count]);
 if(strlen(name[count])==0 )
 break;                          /* quit if no name */
 ptr[count++] = name[count];     /* each ptr points to name */
} 
		                         /* sort the pointers */
for(out=0; out<count_1; out++)   /* for each string */
	for(in=out+1; in <count; in++)  /*look at those smaller */
	if (strcmp(ptr[out], ptr[in]) >0)   /*compare */
	{
		                               /* if any smaller, */
		                               /* swap pointers */
	    temp = ptr[in];
		ptr[in]=ptr[out];
		ptr[out]= temp;
}
printf("\nSorted list: \n");
for (out=0;out<count;out++) /*print sorted list */
printf("Name %d: %s\n" , out+1, ptr[out]);
} 
																								 }							 							                                    
        

