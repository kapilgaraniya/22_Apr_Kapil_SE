#include<stdio.h>
main()
{
	//Area of Circle :
	
	int r;
	const pi=3.14;
	
	
	printf("Enter Number : ");
	scanf("%d",&r);
	
	printf("The of circle is : %d",pi*r*r);
	printf("\n");
	
	//Area of Rectangle :
	
	int length,width;
	
	printf("Enter Length : ");
	scanf("%d",&length);
	
	printf("Enter Width : ");
	scanf("%d",&width);
	
	printf("Area of Rectangle is : %d",length*width);
	printf("\n");

	//Area of Triangle :
	
	int base,height;
	
	printf("Enter Base :");
	scanf("%d",&base);
	
	printf("Enter Height :");
	scanf("%d",&height);	
	printf("Area of Triangle is : %d ",base*height/2);
	
}
