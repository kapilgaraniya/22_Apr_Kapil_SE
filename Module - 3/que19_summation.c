#include <stdio.h>

int main()
{
	//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans:- 5) :
	
    int n,sum=0,n1,n2;
    printf("Enter number = ");
    scanf("%d",&n);
    
    n2 = n % 10;
   
    while(n>=10)
    {
        n=n/10;
    }
    
    n1=n;
    printf("\n");
    
    printf("first digit = %d and last digit = %d", n1,n2);
    printf("\n");
    printf("\n");
    printf("%d + %d = %d",n1,n2,n1+n2);
}
