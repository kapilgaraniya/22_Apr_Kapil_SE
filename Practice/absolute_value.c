#include<stdio.h>

main()
{
	int n;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	if(n<0)
	{
		n = n * (-1);
	}
	printf("The Absolute Value Is : %d",n);
}
