#include<stdio.h>

int main()
{
	//WAP To TAke 10 Numbers Input from User And Find Out…
	
	int num[10],i,even,odd,esum,osum;
	
	printf("Enter 10 Times Numbers Only..!\n\n");
	
	for(i=0;i<10;i++)
	{
		printf("Enter Number :");
		scanf("%d",&num[i]);
	}
	printf("\n");
	
	//How many Even numbers are there :
	
	for(i=0;i<10;i++)
	{
	if(num[i]%2==0)
		{
			printf("\n%d = is Even Number",num[i]);
			esum += num[i];
		}
	}
	printf("\n");
	
	//How many odd numbers are there :
	
	for(i=0;i<10;i++)
	{
	if(num[i]%2!=0)
		{
			printf("\n%d = is Odd Number",num[i]);
			osum += num[i];
		}
	}
	
	//Sum of even numbers :
	printf("\n\nSum Of Even Number is : %d",esum);
	
	//Sum of odd numbers :
	printf("\nSum Of Odd Numbers is : %d",osum);
}
