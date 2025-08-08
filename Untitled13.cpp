/* double.c */
/* shows use of 2_dimensional arrays */
#difine ROW 4
#define COLS 5
main()
{
  static int table [ROW][COLS] =
                       {    { 13,15,17,19,21},
                            {20,22,24,26,28},
                            { 31,33,35,37,39},
                            {40,42,44,46,48},  };
 int konst =10;                              /* constant to be addea */
int j.k;
for(j=0; J<ROWS; J++)                        /* add konst to each element */
   for(k=0; k<COLS; K++)
    table[j][k] =table[j][k] + konst;
  for (j=0; j< ROWS;J++ )             /* point out array */
  {
  for (k=0; k<COLS; k++)
        printf("%d", table[j][k] );
	 printf("\n");
 } 
                             
							
                              							
              							  
					    

