#include "3-calc.h"

/**
 * op_add - add a n b
 * @a: integer a
 * @b: integer b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a n b
 * @a: ..
 * @b: ..
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul: multiply a and b
 * @a: ..
 * @b: ..
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: divide a and b
 * @a: ..
 * @b: ..
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get the modulus
 * @a: ..
 * @b: ..
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
