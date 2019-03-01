// Author: Stewart Anderson
// Matric: 40345422
// Last Edit: 01.03.2019

/*
	This code will take a .c input file and will output to a .o file while removing comments & adding all header file methods.
	This is given that the header files that are given are also in the same directory as the target file.

	DO NOT COMPILE BY ITSELF -- SEE README.TXT FOR MORE INFORMATION!!!
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_LENGTH 1000

int main(int argc, char *argv[])
{
	char *input_file;

	if (argc == 3)
	{
		if (strcmp(argv[0], "-i"))
		{
			input_file = argv[2];
			FILE* input = fopen(input_file, "r"); // Input file for read access only.
			char line[LINE_LENGTH];
			int nonEmptyLines = 0;
			int commentedLines = 0;

			int i = 0;
			while (input_file[i] != '\0')
			{
				i++;
			}
			input_file[i - 2] = '\0';

			FILE* output = fopen(strcat(input_file, ".o"), "w"); // Output file for write access // generates if it doesn't exist.
			while (fgets(line, LINE_LENGTH, input) != NULL) // To iterate over the whole file
			{
				if (!((line[0] == '\t')
					|| (line[0] == '\n')
					|| (line[0] == ' '))) // If the line isn't completely empty
				{
					nonEmptyLines++;
				}

				for (int i = 0; i < strlen(line); i++) // Iterate over the line by character
				{
					if ((line[i] == '#' && line[i + 1] == 'i')
						|| (line[i] == '#' && line[i + 1] == ' ' && line[i + 2] == 'i')) // Checking for the start of a #include block.
					{
						char buffer[LINE_LENGTH];

						int counter = 0;
						for (int j = 10; j < strlen(line)-1; j++) // Start at where we think the first quote is
						{
							buffer[counter] = line[j];
							counter++;
						}

						int k = 0;
						while (buffer[k] != '\0') // Takes the line until there is a null terminator
						{
							k++;
						}
						buffer[k - 1] = '\0'; // Removes the last quote from the string -- Waiting to open .h

						line[i] = '\n';
						line[i + 1] = '\0'; // Removes the #include from the document.

						char header_line[LINE_LENGTH];
						FILE* header_file = fopen(buffer, "r"); // Opens the header file for read-only access.
						while (fgets(header_line, LINE_LENGTH, header_file) != NULL) // Iterates over the header file.
						{
							fputs(header_line, output);
						}
						fclose(header_file);
					}

					if ((line[i] == '/') && (line[i + 1] == '/')) // If a comment is found
					{
						commentedLines++;
						line[i] = '\n';
						line[i + 1] = '\0'; // Remove the comment from the file.
					}
				}
				fputs(line, output);
			}
			int total_lines = 0;

			total_lines = nonEmptyLines + commentedLines;

			fclose(input);
			fclose(output);
			printf("The total number of lines without comments: %d\n", nonEmptyLines);
			printf("The total number of line with comments (inline & standard): %d\n", commentedLines);
			printf("The total number of lines in this file: %d\n", total_lines);
		}
	}
	else if (argc == 4)
	{
		if (strcmp(argv[2], "-c"))
		{
			input_file = argv[2];
			FILE* input = fopen(input_file, "r"); // Input file for read access only.
			char line[LINE_LENGTH];
			int nonEmptyLines = 0;
			int commentedLines = 0;

			int i = 0;
			while (input_file[i] != '\0') // Takes the line until there is a null terminator
			{
				i++;
			}
			input_file[i - 2] = '\0'; // Removes the file extension from the file -- Waiting to append .o below.

			FILE* output = fopen(strcat(input_file, ".o"), "w"); // Output file for write access // generates if it doesn't exist.
			while (fgets(line, LINE_LENGTH, input) != NULL) // To iterate over the whole file
			{
				if (!((line[0] == '\t')
					|| (line[0] == '\n')
					|| (line[0] == ' '))) // If the line isn't completely empty
				{
					nonEmptyLines++;
				}

				for (int i = 0; i < strlen(line); i++) // Iterate over the line by character
				{
					if ((line[i] == '#' && line[i + 1] == 'i')
						|| (line[i] == '#' && line[i + 1] == ' ' && line[i + 2] == 'i')) // Checking for the start of a #include block.
					{
						char buffer[LINE_LENGTH];

						int counter = 0;
						for (int j = 10; j < strlen(line) - 1; j++) // Start at where we think the first quote is
						{
							buffer[counter] = line[j];
							counter++;
						}

						int k = 0;
						while (buffer[k] != '\0') // Takes the line until there is a null terminator
						{
							k++;
						}
						buffer[k - 1] = '\0'; // Removes the last quote from the string -- Waiting to open .h

						line[i] = '\n';
						line[i + 1] = '\0'; // Removes the #include from the document.

						char header_line[LINE_LENGTH];
						FILE* header_file = fopen(buffer, "r"); // Opens the header file for read-only access.
						while (fgets(header_line, LINE_LENGTH, header_file) != NULL) // Iterates over the header file.
						{
							fputs(header_line, output);
						}
						fclose(header_file);
					}

					if ((line[i] == '/') && (line[i + 1] == '/')) // If the line is a comment
					{
						commentedLines++;
					}
				}
				fputs(line, output);
			}
			int total_lines = 0;

			total_lines = nonEmptyLines + commentedLines;

			fclose(input);
			fclose(output);
			printf("The total number of lines without comments: %d\n", nonEmptyLines);
			printf("The total number of line with comments (inline & standard): %d\n", commentedLines);
			printf("The total number of lines in this file: %d\n", total_lines);
		}
	}
	return 0;
}