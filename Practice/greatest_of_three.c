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
		printf("%d is Greatest",a);
	}
	
	if(b>a && b>c)
	{
		printf("%d is Greatest",b);
	}
	
	if(c>a && c>b)
	{
		printf("%d id Greatest",c);
	}
}
