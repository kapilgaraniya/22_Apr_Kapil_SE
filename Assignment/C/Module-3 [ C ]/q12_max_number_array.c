// 12. Write a program to find out the max number from given 10 elements of array :

#include <stdio.h>

main()
{
  int n=10,i;
  int arr[10];
  
  printf("---ENTER 10 NUMBERS---\n\n");

  for (i=0;i<n;i++)
  {
    printf("Enter number %d : ",i+1);
    scanf("%d",&arr[i]);
  }

  for (i=1;i<n;i++)
  {
    if(arr[0]<arr[i])
	{
      arr[0]=arr[i];
    }
  }

  printf("\nMax Number is = %d",arr[0]);
}

