//Q. 29 = WAP Append Content To A File...
#include<stdio.h>

main()
{
	FILE *fl;
	char str[100];
	
	fl = fopen("q29.txt", "a");
	
	if(fl == NULL)
	{
		printf("File Does Not Exist...\n");
	}
	
	printf("Enter Your Content : ");
	fgets(str,100,stdin);
	
	fprintf(fl,"%s",str);
	
	fclose(fl);
	
	printf("Your Content is Save in q29.txt File...");
}
