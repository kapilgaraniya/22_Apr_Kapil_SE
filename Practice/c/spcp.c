#include<stdio.h>

main()
{
	int cp,sp;
	
	printf("Enter Cost Price : ");
	scanf("%d",&cp);
	printf("Enter Selling Price : ");
	scanf("%d",&sp);
	
	if(cp<sp)
	{
		printf("Profit");
	}
	if(cp>sp)
	{
		printf("Lose");
	}
	
}
