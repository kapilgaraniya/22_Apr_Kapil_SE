#include<stdio.h>

main()
{	// Answer The question ?
	
	char a,b,c,d,ans;
	
	printf("(Que.1) What Is India's Big State By Aria ?\n");
	printf(" A. Gujrat\n");
	printf(" B. Maharashtra\n");
	printf(" C. Rajasthan\n");
	printf(" D. Panjab\n");
	printf("Select option Only(a,b,c,d):%c",ans);
	scanf("%c",&ans);

	// Four Option like A, B, C & D...
	
	if(ans=='c')
	{
		printf("WOW.. Right Answer : C. Rajasthan");
	}
	
	else if(ans == 'a')
	{
		printf("You Are Wrong The Right Answer Is : C. Rajasthan");
	}
	
	else if(ans == 'b')
	{
		printf("You Are Wrong The Right Answer Is : C. Rajasthan");
	}
	
	else if(ans == 'd')
	{
		printf("You Are Wrong The Right Answer Is : C. Rajasthan");
	}
	
	else
	{
		printf("Plz... Select A, b, C & D Only !");
	}
}
