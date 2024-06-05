#include <stdio.h>
int main()
{
  //WAP to print Fibonacci series up to given numbers :
  
  /*Fibonacci series means
	0+1=1,1+1=2,1+2=3,2+3=5...
	output : 0,1,1,2,3,5,8...
  */
  
	int i,n,fnum=0,snum=1;
	int r=fnum+snum;

	printf("Enter Number: ");
	scanf("%d",&n);

	printf("Fibonacci Series : %d,%d,",fnum,snum); // print 0,1,

	for(i=3;i<=n;i++)
	{
      printf("%d,",r);
      fnum = snum;
      snum = r;
      r = fnum + snum;
	}
}
