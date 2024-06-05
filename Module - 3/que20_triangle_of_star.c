/* pattern :
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include <stdio.h>
 
main()  
{  
	int a=5,i,j,k;
	
	for(i=1;i<=5;i++)
	{
       for(j=1;j<=a-1;j++)
       { 
           printf(" ");  
       } 
       for(k=1;k<=2*i-1;k++)
       { 
         printf("*");  
       } 
       a--;  
     
      printf("\n");  
    }  
}  
