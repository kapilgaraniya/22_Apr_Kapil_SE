//16.Write a program to copy string from one string to another string with user define function

#include<stdio.h>

void myfunc(char s2[50],char s1[50])
{
	int i;
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i] = s1[i];	
	}
	s2[i] = '\0';
}

main()
{
	char s1[50],s2[50];
	int i;
	
	printf("Enter String : ");
	scanf("%s",&s1);
	
	myfunc(s2,s1);
	
	printf("The String Is : %s",s2);
	
}
