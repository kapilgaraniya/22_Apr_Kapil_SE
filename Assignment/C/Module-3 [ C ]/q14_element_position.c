//14.Write a Program of find the element of given position from the array :

#include<stdio.h>

main()
{
	int arr[100],n,i,x,y=0;
	
	printf("How Many Enter Number Of array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter Element You Want To Find : ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			y=1;
			break;
		}
	}
	
	if(y==1)
	{
		printf("\n%d - is Found At Position = %d",x,i+1);
	}
	else
	{
		printf("\n%d - is Not Found of Array",x);
	}
}
