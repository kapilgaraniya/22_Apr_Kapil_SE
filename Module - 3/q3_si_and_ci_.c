//3. Write a program to find the simple Interest & Compound Interest :

#include<stdio.h>
#include<math.h>

main()
{
	float p,r,t,si,ci;
	
	printf("Enter Principal Amount: ");
	scanf("%f",&p);
	printf("Enter Time in Year : ");
	scanf("%f",&t);
	printf("Enter Rate : ");
	scanf("%f",&r);
	
	si=(p*r*t)/100;
	printf("\nSimple Interest is = %0.2f\n",si);
	
	ci=p*(pow(1+r/100,t)-1);
	printf("Compound Interest is = %0.2f",ci);	
}
