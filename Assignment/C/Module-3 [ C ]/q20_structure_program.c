//20.Write a program of structure for five employee that provides the following information print
//and display empno, empname, address and age.

#include<stdio.h>

struct emp
{
	int eno;
	char enm[20];
	char eadd[100];
	int age;
}emp[5];

main()
{
	int i;
	
	printf("Enter 5 Employee information :-\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n%d = Enter Employee Details :",i+1);
		
		printf("\n\nEnter Employee Number : ");
		scanf("%d",&emp[i].eno);
		printf("Enter Employee Name : ");
		scanf("%s",&emp[i].enm[20]);
		printf("Enter Employee Address : ");
		scanf("%s",&emp[i].eadd[100]);
		printf("Enter Employee Age : ");
		scanf("%d",&emp[i].age);
		
	}
	
	printf("\n\n5 Employee information :-\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n%d = Employee Information",i+1);
		printf("\nEmployee Number : %d",emp[i].eno);
		printf("\nEmployee Name : %s",emp[i].enm);
		printf("\nEmployee Address : %s",emp[i].eadd);
		printf("\nEmployee Age : %d",emp[i].age);
		
	}
}
