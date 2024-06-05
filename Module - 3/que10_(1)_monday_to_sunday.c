#include<stdio.h>

main()
{
	//WAP To Show Monday to Sunday Using Switch Case :
	
	int a;
	
	printf("just Press Any Number From 1 to 7 : ");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
		printf("Today is Sunday");
		break;
	
		case 2:
		printf("Today is Monday");
		break;
	
		case 3:
		printf("Today is Tuesday");
		break;
	
		case 4:
		printf("Today is Wednesday");
		break;
	
		case 5:
		printf("Today is Thursday");
		break;
	
		case 6:
		printf("Today is Friday");
		break;
	
		case 7:
		printf("Today is saturday");
		break;
	
		default:
		printf("Error!, Plz... Press 1 to 7 Only");
		break;
	}
}
