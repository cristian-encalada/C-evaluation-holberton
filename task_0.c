#include <stdio.h>
void even_odd(void);
/**
 * main - Main program to test functions
 *
 * Return: 0 = Success
 */

int main(void)
{
	even_odd();

	return (0);
}

/**
 * even_odd - Program that reads an integer from the user
 *		and determines if it is an even or odd number
 *
 * Return: void
 */

void even_odd(void)
{
	int num = 0;

	printf("Enter a number: ");
		scanf("%d", &num);

	if (num % 2 == 0)
		printf("The number %d is even\n", num);
	else
		printf("The number %d is odd\n", num);

}
