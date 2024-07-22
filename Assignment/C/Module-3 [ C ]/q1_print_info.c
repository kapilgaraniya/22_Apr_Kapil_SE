//1. Display This Information using printf a. Your Name b. Your Birth date c. Your Age d. Your Address :

#include<stdio.h>

main()
{
	char name[10],dob[12],add[100];
	int age;
	
	printf("A. Enter Your Name :");
	scanf("%s",&name);
	
	printf("B. Enter Your Birth Date :");
	scanf("%s",&dob);
	
	printf("C. Enter Your Age :");
	scanf("%d",&age);
	
	printf("D. Enter Your Address :");
	scanf("%s",&add);
	
	
	printf("\nYour Name is : %s",name);
	printf("\nYour DOB is : %s",dob);
	printf("\nYour Addres is: %s", add);
	printf("\nYour Age is : %d",age);
}

