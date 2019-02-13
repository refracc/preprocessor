#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LINE_LENGTH 1000

int main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{

	}
	FILE * input_file = fopen("Test Files/string_functions.c", "r");
	char line [LINE_LENGTH];
	int nonEmptyLines = 0;
	int commentedLines = 0;

	while (fgets(line, LINE_LENGTH, input_file) != NULL)
	{
		printf("%s\n", line);

		if(!((line[0] == NULL)
			|| (line[0] == '\t')
			|| (line[0] == '\n')))
			{
				nonEmptyLines++;
			}

			for(int i = 0; i < strlen(line); i++){
				if((line[i] == '/') && (line[i + 1] == '/'))
				{
					commentedLines++;
				}
			}
	}

	fclose(input_file);
	printf("The total number of lines without comments: %d\n", nonEmptyLines);
	printf("The total number of line with comments (inline & standard): %d\n", commentedLines);
	return 0;
}
