#include<stdio.h>

main()
{
	//WAP to find out the max from given number (E.g., No: 1562 Max number is 6)
	 
	int n[20],i,max=0,size;
	printf("How many Numbers Do You Want To Enter : ");
	scanf("%d",&size);
	printf("\n");
	for(i=1;i<=size;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&n[i]);
		
		if(max<n[i])
		{
			 max = n[i];
		}
	}
	printf("\nThe Max Number is : %d",max);
}
