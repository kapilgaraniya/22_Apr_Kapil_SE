#include<stdio.h>

main()
{
	//WAP to find number is even or odd using ternary operator :
	
	int n;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	(n % 2 == 0) ? printf("The Number Is Even : %d",n) : printf("The Number Is Odd : %d",n);
}
