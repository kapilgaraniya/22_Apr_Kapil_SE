// C program to print right half pyramid pattern of stars  :

#include <stdio.h> 

int main() 
{ 
	int i,j,r=5; 

	for(i=0;i<r;i++)
	{ 

		for(j=0;j<=i;j++)
		{ 
			printf("* "); 
		} 
		printf("\n"); 
	}
}

