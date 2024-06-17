#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num;

    FILE *inputFile, *evenFile, *oddFile;
    inputFile = fopen("input.txt", "r");
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if (inputFile == NULL || evenFile == NULL || oddFile == NULL)
	{
        printf("Error opening files!");
    }

    while (fscanf(inputFile, "%d", &num) != EOF)
	{
        if (num % 2 == 0)
		{
            fprintf(evenFile, "%d\n", num);
        } 
		else 
		{
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);
    
    printf("Done...");
}

