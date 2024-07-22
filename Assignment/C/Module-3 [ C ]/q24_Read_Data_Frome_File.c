// 24. Write a program to read data from file.

#include<stdio.h>

main()
{
	FILE*data;
	char n[100];

	data = fopen("ReadFile.txt","r");
	
	if(data == NULL)
	{
		printf("Error..!!!");
	}
	
	while(fgets(n,100,data))
	{
		printf("%s",n);
	}
}

