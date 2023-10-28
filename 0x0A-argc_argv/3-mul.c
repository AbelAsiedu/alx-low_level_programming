#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = mul(num1, num2);

	printf("%d\n", result);

	return (0);
}
