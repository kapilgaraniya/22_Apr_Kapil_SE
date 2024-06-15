// 24. Write a program to read data from file.

#include<stdio.h>

main()
{
	FILE*data;
	char n;

	data = fopen("ReadFile.txt","r");
	
	if(data == NULL)
	{
		printf("Error..!!!");
	}
	
	do
	{
		n = fgetc(data);
		printf("%c",n);
	}
	while(n != EOF);
}

