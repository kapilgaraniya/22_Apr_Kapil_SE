#include<stdio.h>

main()
{
	//Display This Information Using Printf -> 1)Name, 2)Dob, 3)Address, 4)Age :

	char name[10],dob[12],add[100];
	int age;
	
	printf("Enter Your Name :");
	scanf("%s",&name);
	
	printf("Enter Your Date Of Birth :");
	scanf("%s",&dob);
	
	printf("Enter Your Address :");
	scanf("%s",&add);
	
	printf("Enter Your Age :");
	scanf("%d",&age);
	
	printf("Your Name is:%s",name);
	printf("\nYour DOB is:%s",dob);
	printf("\nYour Addres is:%s", add);
	printf("\nYourAge is:%d",age);
}
