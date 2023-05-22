#include <stdio.h>

int read_file(int argc, char *argv[]);

/**
 * main - Main program to test functions
 * @argc: argument count
 * @argv: array that stores arguments
 * Return: 0 = Success
 */
int main(int argc, char *argv[])
{

	read_file(argc, argv);

	return (0);
}

/**
 * read_file - Program that reads an file
 * @argc: argument count
 * @argv: array that stores arguments
 *
 * Return: 0 = success; -1 = failure
 */

int read_file(int argc, char *argv[])
{
	char line[100];
	char const *fileName = "4.input";

	FILE *file = fopen(fileName, "r");

	if (file == NULL)
	{
		printf("Unable to open file: %s\n", fileName);
		return (-1);
	}

	while (fgets(line, sizeof(line), file))
		printf("%s", line);

	fclose(file);

	return (0);
}
