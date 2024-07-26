#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	
	printf("Enter 2nd Number : ");
	scanf("%d",&b);
	
	printf("Enter 3rd Number : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n%d = is Greatest",a);
	}
	
	else if(b>a && b>c)
	{
		printf("\n%d = is Greatest",b);
	}
	
	else if(c>a && c>b)
	{
		printf("\n%d = is Greatest",c);
	}
	else
	{
		printf("\nError..!\nPlz... Try Again");
	}
}
