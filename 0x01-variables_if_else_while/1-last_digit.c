#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int last_digit;
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (last_digit > 5)
	{printf("%d is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
	printf("%d is 0\n", last_digit);
	}
	else if (last_digit < 6 && =! 0)
	{
	printf("%d is less than 6 and not 0\n", last_digit)
	}
	return (0);
}
