//13.Write a program to sort the array of 5 elements :

#include<stdio.h>

main()
{
	int a[5],i,j,z;
	
	printf("Enter 5 Time Elements\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d - Enter Element : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				z=a[i];
				a[i]=a[j];
				a[j]=z;
			}
		}
	}
	printf("\nArray Elements : ");
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
}
