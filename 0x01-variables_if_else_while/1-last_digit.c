#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 * last digit stored in the variable
 * Result: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 5;

	if (last_digit > 5)
	{printf("%d is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
	printf("%d is 0\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("%d is less than 6 and not 0\n", last_digit);
	}
	return (0);
}