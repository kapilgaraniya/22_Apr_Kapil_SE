#include<stdio.h>

main()
{
	//Swap Two Number Without Using Third Variable :
	
	int x=20,y=10;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("x = %d\ny = %d",x,y);
}
