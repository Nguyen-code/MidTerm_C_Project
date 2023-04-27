#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 1
	FILE * fp;
	char ch;

	// 2
	fp = fopen("message.txt", "r"); // read message from user

	// 3
	if (fp == NULL)
	{
		printf("File is not available \n");
		return 0;
	}
	else
	{
		// 4
		while ((ch = fgetc(fp)) != EOF)
		{
			printf("%c", ch);
		}
	}

	// 5
	fclose(fp);

	return 0;
}