#include<stdio.h>

main()
{
	FILE *fl;
	int i,n,m;
	char nm[50];
	
	printf("Enter The Number Of Students : ");
	scanf("%d",&n);
	
	fl=fopen("students.txt", "w");
	if(fl == NULL)
	{
		printf("Error...\nFile Is Not Open !!");
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d = Enter Student Name : ",i+1);
		scanf("%s",&nm);
		printf("%d = Enter Student Marks : ",i+1);
		scanf("%d",&m);
		
		fprintf(fl,"Student Name : %s\n",nm);
		fprintf(fl,"Student Marks : %d\n\n",m);
	}
	
	fclose(fl);
	
	printf("Done...\nData Writen to student.txt file");
}
