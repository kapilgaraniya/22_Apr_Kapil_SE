#include<stdio.h>

	// Formula Of Simple Interes :- S.I. = (P × R × T)/100
	// P = Principal, R = Rate of Interest in % per annum, and T = Time.
main()
{

    //Simple interset program
    
    int p, r, t, i;

    printf("Enter Principal Amount: ");
    scanf("%d", &p);

    printf("Enter Rate: ");
    scanf("%d", &r);

    printf("Enter Time: ");
    scanf("%d", &t);

    i= (p*r*t)/100;
    
    printf("The Simple Interest Is : %d", i);

}

