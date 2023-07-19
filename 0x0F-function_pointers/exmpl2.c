#include <stdio.h>
#define ops 4
/**
 * This function defines four functions: sum, sub, mult, and div.
 * Each function takes two float values as arguments and returns a float value.
 */
float sum(float a, float b) {return (a+b);}
float sub(float a, float b) {return (a-b);}
float mult(float a, float b) {return (a*b);}
float div(float a, float b) {return (a/b);}
/**
 * This function takes an integer as input and calls the corresponding function
 * from the ptr2func array.
 * The output of the function is then printed to the console.
 */
int main()
{
	float (*ptr2func[ops]) (float, float) = {sum, sub, mult, div};
	int choice;
	float a, b;

	printf("enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div: \n");
	scanf("%d", &choice);
	printf("enter the two numbers:\n");
	scanf("%f %f", &a, &b);
	printf("%p", ptr2func[choice]);
	return 0;
}

