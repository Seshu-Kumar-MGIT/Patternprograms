/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#define sqr(x) x++ * x++
int main()
{
	int row,column,no_rows;
	printf("Enter number of rows:");
	scanf("%d",&no_rows);
	
	for(row=1;row<=no_rows;row++)
	{
	    for(column=1;column<=row;column++)
	    {
	        printf("* ");
	    }
	    printf("\n");
	}
	
	for(row=no_rows-1;row>=1;row--)
	{
	    for(column=1;column<=row;column++)
	    {
	        printf("* ");
	    }
	    printf("\n");
	}
}

