#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LINE_LENGTH 1000

int main(int argc, char **argv)
{
	FILE * input_file = fopen("math_functions.c", "r");
	char line [LINE_LENGTH];
	int nonEmptyLines = 0;
	int commentedLines = 0;

	while (fgets(line, LINE_LENGTH, input_file) != NULL)
	{
		if(line[0] != ' '
			|| line[0] != "\t")
		{
			nonEmptyLines++;
		}

		for(int i = 0; i < strlen(line); i++)
		{
			if(line[i] == '/' && line[i+1] ==  '/')
			{
				line[i] = "\n";
				line[i+1] = "\0";
				commentedLines++;
			}
		}
	}

	fclose(input_file);
	printf("The total number of lines without comments: %d\n", nonEmptyLines);
	printf("The total number of line with comments (inline & standard): %d\n", commentedLines);
	return 0;
}
