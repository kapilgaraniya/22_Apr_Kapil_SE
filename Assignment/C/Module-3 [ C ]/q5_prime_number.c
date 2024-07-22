// 5. Write a Program to check the given number is prime or not prime :

#include<stdio.h>

main()
{
	int n,i,c=0;
	
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d = Prime Number",n);
	}
	else
	{
		printf("%d = Not Prime Number",n);
	}
}
