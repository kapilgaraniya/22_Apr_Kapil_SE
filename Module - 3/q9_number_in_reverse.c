// 9. Write a program to print the number in reverse order :

#include<stdio.h>
#include<string.h>

main()
{
	char n[10];
	
	printf("Enter Number's : ");
	scanf("%s",&n);
	
	printf("\nYou Enter is  : %s",n);
	printf("\nThe reverse is: %s ",strrev(n));
}
