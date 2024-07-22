// 25.Write a program to read and write data from the file 

#include <stdio.h>

main()
{
	FILE *fl;
	char data[100]; 

	fl = fopen("sample.txt", "w");
	if (fl == NULL) {
    printf("Error opening file!\n");
    return 1;
	}
	
	printf("Enter data to write to the file: ");
	fgets(data,100, stdin);
	fprintf(fl, "%s", data);
	fclose(fl);
}

