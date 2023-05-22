#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBERS 100
#define MAX_COUNT 100	/* to calculate the mode */
#define STR_SIZE 100	/* string size to be printed in a new file */

int read_file(int argc, char *argv[], int numbers[]);
float calculate_median(int numbers[], int size);
int calculate_mode(int numbers[], int size);
void write_results(const char *filename, const char *str);
/**
 * main - Main program to test functions
 * @argc: argument count
 * @argv: array that stores arguments
 * Return: 0 = Success
 */
int main(int argc, char *argv[])
{
	int numbers[MAX_NUMBERS];
	int num_count, i, temp, mode;
	float total, mean;	/* to find the mean*/
	float median;
	char print_mean[STR_SIZE], print_median[STR_SIZE], print_mode[STR_SIZE];

	num_count = read_file(argc, argv, numbers);

	total = 0;
	/* sum all the converted numbers */
	for (i = 0; i < num_count; i++)
		total += numbers[i];

	/* calculate the mean */
	mean = total / num_count;
	sprintf(print_mean, "The mean is: %.2f\n", mean);
	printf("The mean is: %.2f\n", mean);
	write_results("4.mean", print_mean);

	/* calculate the median */
	median = calculate_median(numbers, num_count);
	sprintf(print_median, "The median is: %.2f\n", median);
	printf("The median is: %.2f\n", median);
	write_results("4.median", print_median);

	/* calculate the mode */
	mode = calculate_mode(numbers, num_count);
	sprintf(print_mode, "The mode is: %d\n", mode);
	printf("The mode is: %.d\n", mode);
	write_results("4.mode", print_mode);

	return (0);
}

/**
 * read_file - Program that reads an file
 * @argc: argument count
 * @argv: array that stores arguments
 * @numbers: array of integers
 *
 * Return: the number of lines read; -1 = failure
 */

int read_file(int argc, char *argv[], int numbers[])
{
	char line[100];
	int num_count, num;
	char const *fileName = "4.input";

	FILE *file = fopen(fileName, "r");

	if (file == NULL)
	{
		printf("Unable to open file: %s\n", fileName);
		return (-1);
	}

	num_count = 0;
	while (fgets(line, sizeof(line), file))
	{
		num = atoi(line);
		numbers[num_count] = num;
		num_count++;
	}

	fclose(file);

	return (num_count);
}

/**
 * calculate_median - Calculate the median of a set of numbers
 * @numbers: array of integers
 * @size: number of integers
 *
 * Return: the median calculated or -1 on failure
 */

float calculate_median(int numbers[], int size)
{
	int i, j, temp;	/* to sort values */
	int mid_index, mid_index1, mid_index2;
	float median;

	/* Sort in ascending order using the Bubble sort algorithm */
	if (numbers == NULL || size == 0)
		return (-1);

	/* loop to access each array element */
	for (j = 0; j < size - 1; j++)
	{
		/* loop to compare numbers elements */
		for (i = 0; i < size - j - 1; i++)
		{
			/* compare two adjacent elements (ascending order) */
			if (numbers[i] > numbers[i + 1])
			{
				/* swap if elements are not in the intended order */
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
	/* Calculate the median */
	if (size % 2 == 0)	/* size is even */
	{
		mid_index1 = (size / 2) - 1;
		mid_index2 = size / 2;
		median = (numbers[mid_index1] + numbers[mid_index2]) / 2.0;
		return (median);
	}
	else	/* size is odd */
	{
		mid_index = size / 2;
		median = numbers[mid_index];
		return (median);
	}
}

/**
 * calculate_mode - Calculate the mode of a set of numbers
 * @numbers: array of integers
 * @size: number of integers
 *
 * Return: the mode calculated or -1 on failure
 */
int calculate_mode(int numbers[], int size)
{
	int mode = -1;
	int count[MAX_COUNT] = {0}; /* Array to store the count of each number */
	int max_count = 0;

	if (numbers == NULL || size == 0)
		return (mode);

	/* Count the occurrences of each number */
	for (int i = 0; i < size; i++)
		count[numbers[i]]++;

	/* Find the maximum count */
	for (int i = 0; i < MAX_COUNT; i++)
	{
		if (count[i] > max_count)
		{
			max_count = count[i];
			mode = i;
		}
	}

	return (mode);
}

/**
 * write_results - create a new text file containing
 *			the calculated value
 * @str: string to be written in the file
 * @filename: name of the file to be created
 *
 * Return: void
 */

void write_results(const char *filename, const char *str)
{

	FILE *file = fopen(filename, "w");

	if (file == NULL)
	{
		fprintf(stderr, "Unable to create file: %s\n", filename);
		return;
	}

	fprintf(file, "%s", str);

	fclose(file);
}
