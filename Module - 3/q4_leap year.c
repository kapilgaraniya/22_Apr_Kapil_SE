//4. Write a Program to check the given year is leap year or not :

#include<stdio.h>
     
main()
{	
	int year;
	
	printf("Enter Any Year : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("%d - Is a Leap Year",year);
	}
	else
		printf("%d - Is a Not Leap Year",year);
}
