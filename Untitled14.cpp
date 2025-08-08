/* double.c */
/* show use of pointers on 2-dimentional arrays */
#define rows 4
#define cols 5
main()
{
	static int table[ROWS][COLS]= { {13, 15, 17, 19, 21}, 
	{20, 22, 24, 26, 28}, {31, 33, 35, 37, 39}, {40, 42, 44, 46, 48} };
	
	int konst = 10;           /* constant to be added */
	int j, k;
	
	for(j=0; j<ROWS; j++)      /* add kont toeach element */
	 for(k=0; k<COLS; k++)
	   *(*(table+j)+k)  = *(*(table+j)+k) + konst;
	
	for(j=0; j<ROWS; j++)    /* print out array */
	{
		for(k=0; k<COLS; k++)
		  printf("%d ", *(*(table+j)+k);
		printf("\n");
	}
}
