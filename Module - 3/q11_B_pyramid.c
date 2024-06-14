// C program to print the full pyramid pattern of Numbers :

#include <stdio.h>

main()
{
	int r,i,j,k=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}

