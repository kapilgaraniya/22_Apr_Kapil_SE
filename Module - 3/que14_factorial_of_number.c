#include<stdio.h>

main()
{
	// WAP to print factorial of given number :
	
	// factortial number means =  input : 5 => 5*4*3*2*1 output => 120 
	 
	int n,i,result=1;
	
	printf("Enter Integer : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		result=result*i;
	}
	
	printf("%d = Factorial is : %d",n,result);
}
