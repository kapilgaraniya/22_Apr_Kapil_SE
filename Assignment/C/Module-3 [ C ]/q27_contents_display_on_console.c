#include<stdio.h>

main()
{
	FILE * fl;
	char ch;
	
	fl=fopen("one.txt","r");
	
	if(fl == NULL)
	{
		printf("File Is Not Open..!!");
	}
	
	while((ch=fgetc(fl)) != EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fl);
}
