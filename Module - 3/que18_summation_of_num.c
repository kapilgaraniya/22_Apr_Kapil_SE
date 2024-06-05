#include<stdio.h>

int main()
{
	//Write a program make a summation of given number (E.g., 1523 Ans: -11) :
	
	int i,sum=0,num[100],a;
    
    printf("How many Number Do You Want To Enter : ");
    scanf("%d",&a);
    printf("\n");

    for(i=0;i<a;i++)
    {
    	printf("Enter Value : ");
    	scanf("%d",&num[i]);
    	
    	sum+=num[i];
    }
	
	printf("\nSum Is = %d",sum);
}
