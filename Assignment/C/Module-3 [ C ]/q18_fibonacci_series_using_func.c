// 18.Write a program to print the Fibonacci series using function

#include<stdio.h>

int fibon(int a)
{
	if(a<=1)
	{
		return a;
	}
	else
	{
		return fibon(a-1) + fibon(a-2);
	}
}
main()
{
	int i,n;
	
	printf("Enter The Number of Fibonacci Series : ");
	scanf("%d",&n);
	
	int fibon(int a);
	
	printf("\nThe Fibonacci Series Is : ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",fibon(i));
	}
}
