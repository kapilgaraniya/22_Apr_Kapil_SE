#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *f1, *f2;
    char ch1, ch2;
    int a=0;

    f1=fopen("f1.txt", "r");
    f2=fopen("f2.txt", "r");

    if (f1==NULL || f2==NULL)
	{
        printf("Error...\n");
    }

    while (((ch1=fgetc(f1))!=EOF) && ((ch2=fgetc(f2))!=EOF))
	{
        if (ch1!=ch2)
		{
            a=1;
            break;
        }
    }

    if (ch1!=EOF || ch2!=EOF)
	{
        a=1;
    }
    
    fclose(f1);
    fclose(f2);

    if(f1 != f2)
	{
        printf("Error...\nFiles are different.\n");
    }
	else
	{
        printf("Files are Same..\nDone...");
    }
    
}

