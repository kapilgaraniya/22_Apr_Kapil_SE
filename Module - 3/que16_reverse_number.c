#include<stdio.h>
#include<string.h>

main()
{
	//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
	
	char n[10];
	
	printf("Add Many : ");
	scanf("%s",&n);
	printf("\n");
	
	printf("string : %s",n);
	
	printf("reverse : %s ",strrev(n));
}
