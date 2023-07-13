#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if the string values are digits only
 * @nmbr: pointer to the string to be checked
 *
 * Return: 0 if doesn't have digits, 1 if only contains digits
 */

int is_number(char *nmbr)
{
	int i = 0;

	for (; nmbr[i] != '\0'; i++)
	{
		if (!isdigit(nmbr[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * multi - multiplies the two numbers num1 & num2 as strings
 * @num1: pointer num1 to be multiplied
 * @num2: pointer num2 to be multiplied
 *
 * Return: Num1 * num2
 */
int multi(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - Entry of the program
 * @count: num of arguments
 * @vector: array of strings containing the argumetns
 *
 * Return: 0 on success, 98 on error
 */
int main(int count, char **vector)
{
	int value;
	char *num1 = vector[1];
	char *num2 = vector[2];

	if (count != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		return (98);
	}
	value = multi(num1, num2);
	printf("%d\n", value);
	return (0);
}
