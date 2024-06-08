// C program to print the inverted right half pyramid of stars :
#include <stdio.h> 

int main() 
{ 
	int i,j,r=5; 
	
	for (i=0;i<r;i++)
	{ 
		for (j=0;j<r-i;j++)
		{ 
			printf("* "); 
		} 
		printf("\n"); 
	} 
}

