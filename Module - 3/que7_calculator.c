#include<stdio.h>

main()
{
	// Create Simple Calculator :
	
	int a,b;
	
	printf("Enter 1st Value : ");
	scanf("%d",&a);
	
	printf("Enter 2nd Value : ");
	scanf("%d",&b);
	
	printf("\nThe Sum is : %d",a+b); 
	printf("\nThe Sub is : %d",a-b);
	printf("\nThe Mul is : %d",a*b);
	printf("\nThe Div is : %d",a/b);
	printf("\nThe Modulus is : %d",a%b);
}
