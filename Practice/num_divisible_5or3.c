#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if(n%3 == 0 || n%5 == 0)
	{
		printf("The Number is Divisible By 5 or 3");
	}
	else
	{
		printf("The Number is Not Divisible by 5 or 3");
	}
}
