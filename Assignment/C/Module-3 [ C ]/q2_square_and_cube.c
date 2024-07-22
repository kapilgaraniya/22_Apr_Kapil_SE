//2. Write a program to make a square and cube of number :

#include<stdio.h>

main()
{
	int n,square,cube;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	square=n*n;
	cube=n*n*n;
	
	printf("\nSquare is : %d ",square);
	
	printf("\nCube is : %d ",cube);
}
