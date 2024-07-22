//8. Write a program you have to print the Fibonacci series up to user given number :
// Fibonacci series means : 0+1=1,1+1=2,1+2=3,2+3=5... -> output : 0,1,1,2,3,5,8...

#include <stdio.h>

main()
{
	int n,a=0,b=1,i,sum;

	printf("Enter Number of Term : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		sum=a+b;
		a=b;
		b=sum;
	}
}
