/* move.c */
/* show imagge on screen */
#include <stdio.h>
#include <conio.h> /* For clrscr */
#include <dos.h>   /* For delay */
#define ROWS 10
#define COLS 5
main()
{
	int count, j, k;
	char *ptr[ROWS];         //POINTER TO ROW
	char *temp;               // pointer STORAGE 
	
	static char pict[ROWS][COLS] =     //ROCKETSHIP
		{
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		0,		0,		0	},
			{ 0,	0,		'\x1E', 	0,		0	},
			{ 0,	'\x1E',	'\xDB',	'\x1E',	0	},
			
		};
		
	static char table[]=              // ground line
		{ '\xCD', '\xCD', '\xCD', '\xCD', '\xCD' };
		
	for(count=0; count<ROWS; count++)      /* set up pointers */
	
	   *(ptr+count)  = *(pict+count);
	   
	for(count=0; count<ROWS-1; count++)
		{
			for(j=0; j<ROWS; j++)      // print rocket
			{
				for(k=0; k<COLS; k++)
					printf("%c", *(*(ptr+j)+k));
					printf("%c", "\n");
			}
		printf("%s\n", table);       // print ground
		
		temp = *ptr;       // rotate pointer
		for(j=0; j<ROWS-1; j++)
			*(ptr+j) = *(ptr+j+1);
		*(ptr+ROWS-1) = temp;
		}   
}

// code run