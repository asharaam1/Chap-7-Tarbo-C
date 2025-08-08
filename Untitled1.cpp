/* value.c */
/* tests  function which accepts two value */
#include<stdio.h>
// Function declaration
void gets2(int xx, int yy);

int main()
{
	int x=4, y=7; 
	gets2(x, y);
	return 0;
}
	/* gets2() */ 
	/* prints out values of two agruments */
	void gets2(int xx, int yy)
{
    printf(" first is %d, second is %d", xx,yy);
} 

//code run
