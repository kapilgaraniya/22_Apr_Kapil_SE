#include<stdio.h>
     
main()
{
	//WAP To Check If The Given Year Is a Leap Year Or Not :
	
	int year;
	
	printf("Enter Any Year : ");
	scanf("%d",&year);
	
	if(year % 4 == 0)
	{
		printf("%d - Is a Leap Year",year);
	}
	else
		printf("%d - Is a Not Leap Year",year);
}
