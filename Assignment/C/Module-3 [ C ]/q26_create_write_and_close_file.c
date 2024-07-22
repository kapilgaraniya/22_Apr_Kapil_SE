#include<stdio.h>

main()
{
	FILE * wf;
	
	wf=fopen("writef.txt", "w");
	
	if(wf == NULL)
	{
		printf("File is Not Open...!!\n");
	}
	fprintf(wf,"Name : Kapil Garaniya\nID : 1\n");
	
	fclose(wf);
	
	printf("File Write And Close Successfully");
}
