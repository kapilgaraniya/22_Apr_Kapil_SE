//17.Write a program to find out the factorial of given number using function.

#include<stdio.h>

int fac(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num * fac(num-1);
	}
}

main()
{
	int n,a;
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("\nError!!\nplz... Try Agin");
	}
	else
	{
		a = fac(n);
		printf("\nThe Factorial Is : %d",a);
	}
}
