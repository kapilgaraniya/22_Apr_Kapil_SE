#include<stdio.h>
main()
{
	// Convert Year Into Day, And Day Into Year :
	
	int year,day;
	
	//First I Convert Year Into Day :
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	printf("The Day Is : %d",year*365);
	printf("\n");
	printf("\n");
	
	//Now, Convert Day Into Year :
	
	printf("Enter Day : ");
	scanf("%d",&day);
	
	printf("The Year Is : %d",day/365);
}

