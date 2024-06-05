#include<stdio.h>

main()
{
	//WAP To Show Vowel or Consonant using switch case :
	
	char z;
	printf("Enter Any Alphabet : ");
	scanf("%c",&z);
	
	switch(z)
	{
		// a, e, i, o, u is Vowel :
		
		case 'a':
		printf("%c = is Vowel ",z);
		break;
		
		case 'e':
		printf("%c = is Vowel ",z);
		break;
		
		case 'i':
		printf("%c = is Vowel ",z);
		break;
		
		case 'o':
		printf("%c = is Vowel ",z);
		break;
		
		case 'u':
		printf("%c = is Vowel ",z);
		break;
		
		default:
		printf("%c is Constents ",z);
		break;
		
	}
}
