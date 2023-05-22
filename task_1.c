#include <stdio.h>
#include <stdlib.h>		/* to use boolean type */
#include <stdbool.h>	/* to use boolean type */

int read_number(void);
bool is_prime(int);
/**
 * main - Main program to test functions
 *
 * Return: 0 = Success
 */

int main(void)
{
	int num;
	bool prime;

	num = read_number();

	prime = is_prime(num);

	if (prime == true)
		printf("The number %d is prime\n", num);
	else
		printf("The number %d is not prime\n", num);
	return (0);
}

/**
 * read_number - Program that reads an integer from the user
 *
 * Return: The integer read
 */

int read_number(void)
{
	int num = 0;

	printf("Enter a number: ");
		scanf("%d", &num);

	return (num);
}

/**
 * is_prime - Program that reads an integer from the user
 *		and determines if it is an even or odd number
 * @num: input integer
 *
 * Return: true if the number is prime
 *			false if the number is not prime
 */

bool is_prime(int num)
{
	int i;

	if (num <= 1)
		return (false);
	if (num == 2 || num == 3)
		return (true);
	/* check if num is divisible by 2 or 3 */
	if (num % 2 == 0 || num % 3 == 0)
		return (false);
	/* check from 5 to square root of n */
	/* iterate i by (i+6) */
	for (i = 5; i * i <= num; i = i + 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return (false);

	return (true);
}
