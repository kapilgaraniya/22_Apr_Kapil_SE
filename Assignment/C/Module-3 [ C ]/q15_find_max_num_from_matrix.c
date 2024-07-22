// 15. Write a program to find out the Max number from given Matrix

#include<stdio.h>

main()
{
	int a[3][3],i,j,max;
	
	printf("Enter Any 9 Number Of Matrix : ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	max = a[0][0];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<a[i][j])
			   max=a[i][j];
		}
	}
	
	printf("\nThe Max Number Of Matrix is = %d",max);
	
}
