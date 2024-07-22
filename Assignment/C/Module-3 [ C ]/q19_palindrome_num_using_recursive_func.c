//Write a Program of Print a number and check the number is palindrome or not using recursive Function

#include<stdio.h>

int pldm(int n)
{
	if(n==r(n))
	{
		return 0;
	}
}
int r(int n)
{
	int a,sum=0;
	
	if(n != 0)
	{
		a=n % 10;
		sum=sum * 10 + a;
		r(n/10);
	}
	else
	{
		return sum;
	}
	return sum;
}

main()
{
	int r(int n);
	int pldm(int n);
	int num;
	
	printf("Enter A Number : ");
	scanf("%d",&num);
	
	if(pldm(num)==1)
	{
		printf("%d = Is Palindrome Number\n",num);
	}
	else
	{
		printf("%d = Is Not Palindrome Number\n",num);
	}
}

