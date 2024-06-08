//7. Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case(Must Be Menu Driven):

#include<stdio.h>

main()
{
	int choice;
	
	printf("__________MENU__________\n");
	printf("\nEnter 1 To Find Area of Triangle");
	printf("\nEnter 2 To Find Area of Rectangle");
	printf("\nEnter 3 To Find Area of Circle");
	
	printf("\n\nEnter Number : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{
			//Area of Triangle :
			
			int base,height;
	
			printf("\nEnter Base :");
			scanf("%d",&base);
			
			printf("Enter Height :");
			scanf("%d",&height);	
			printf("\nArea of Triangle is : %d ",base*height/2);
			}
		break;
		
		case 2:
			{
			//Area of Rectangle :
	
			int length,width;
			
			printf("Enter Length : ");
			scanf("%d",&length);
			
			printf("Enter Width : ");
			scanf("%d",&width);
			
			printf("Area of Rectangle is : %d",length*width);
			printf("\n");
			}
		break;
		
		case 3:
			{
			//Area of Circle :
	
			int r;
			const pi=3.14;
			
			
			printf("Enter Number : ");
			scanf("%d",&r);
			
			printf("The of circle is : %d",pi*r*r);
			printf("\n");
			}
		break;
		
		default :
			printf("Plz.. Enter Valid Number !");
		break;
	}

}

