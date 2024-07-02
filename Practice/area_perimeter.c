#include<stdio.h>

main()
{
	int l,b,a,p;
	
	printf("Enter Length : ");
	scanf("%d",&l);
	
	printf("Enter Breadth : ");
	scanf("%d",&b);
	
	a = l * b;
	p = 2 * (l+b);
	
	if(a>p)
	{
		printf("Area is Big Than Perimeter");
	}
	else
	{
		printf("Area is Big Than Perimeter");	
	}
}
