/*  Create menu driven calculator using function..
	Use Looping concept for multiple time input..
	Make sure code will be clean and clear.. 
	Use function concept and make your code more understandable.. */ 

#include<stdio.h>
void add()
{
	int a,b;
	
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	printf("\nAddition = %d\n\n",a+b);
	
}
void sub()
{
	int a,b;
	
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	printf("\nSubstraction = %d\n\n",a-b);
	
}

void mul()
{
	int a,b;
	
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	printf("\nMultiplication = %d\n\n",a*b);
}
void div()
{
	float a,b;
	
	printf("\nEnter First Number : ");
	scanf("%f",&a);
	printf("Enter Second Number : ");
	scanf("%f",&b);
	
	printf("\ndivition = %.2f\n\n",a/b);
}

main()
{
	int choice;
	
	do{
		printf("__________Menu__________\n\n");
		printf("1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplition\n");
		printf("4. Divition\n\n");
		
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{	
			case 1:
				add();
			break;
			
			case 2:
				sub();
			break;
			
			case 3:
				mul();
			break;
			
			case 4:
				div();
			break;

			default :
				printf("\nInvalid Choice!!!!\n\n");
			break;
		}
	}
	while (choice == choice);
}

