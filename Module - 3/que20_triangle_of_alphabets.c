/* pattern :
	A
	B C
	D E F
	G H I J
	K L M N O
*/
#include <stdio.h> 

int main() 
{ 
	int rows=5,i,j; 
	char ch='A'; 

	for (i=0; i<rows; i++)
	{ 
		for (j=0; j<=i; j++)
		{ 
			printf("%c ", ch++); 
		} 
		printf("\n"); 
	} 
}

