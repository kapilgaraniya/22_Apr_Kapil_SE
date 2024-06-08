/*
6. Write a program user enter the 5 subject’s mark.
You have to make a total and find the percentage. percentage > 75 you have to print
“Distinction”
percentage > 60 and percentage <= 75 you have to print “First class”
percentage >50 and percentage <= 60 you have to print “Second class”
percentage > 35 and percentage <= 50 you have to print “Pass class”
Otherwise print “Fail”.*/

#include<stdio.h>

main()
{
	int a,b,c,d,e,total;
	float pr;
	
	printf("Enter s1 Mark : ");
	scanf("%d",&a);
	printf("Enter s2 Mark : ");
	scanf("%d",&b);
	printf("Enter s3 Mark : ");
	scanf("%d",&c);
	printf("Enter s4 Mark : ");
	scanf("%d",&d);
	printf("Enter s5 Mark : ");
	scanf("%d",&e);
	
	if(a==35 && b==35 && c==35 && d==35)
	{
		total=a+b+c+d+e;
		printf("\ntotal is : %d",total);
		pr=total/5;
		printf("\npr is : %.2f",pr);
	
		if(pr>70)
		{
		printf("\nFirst class");
		}
		else if(pr>60)
		{
		printf("\nFirst class");
		}
		else if(pr>50)
		{
		printf("\nSecond class");
		}
		else if(pr>35)
		{
			printf("\nPass class");
		}
	}
	else
		{
			printf("\nFail");
		}	
}
