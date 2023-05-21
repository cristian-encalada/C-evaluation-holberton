#include <stdio.h>

int read_number(void);
int power(int base, int exponent);
/**
 * main - Main program to test functions
 *
 * Return: 0 = Success
 */

int main(void)
{

	int num1, num2, pow;

	num1 = read_number();
	num2 = read_number();
	pow = power(num1, num2);

	printf("The power of the two numbers is: %d\n", pow);

}

/**
 * power - recursive function that takes 2 numbers and raise the base
 *			to the power of the exponent
 * @base: base integer
 * @exponent: exponent integer

 * Return: The base raised to the power of the exponent
 */

int power(int base, int exponent)
{
	if (exponent < 0)
		return (-1);
	if (exponent == 0)
		return (1);
	else
		return (base * power(base, exponent - 1));

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