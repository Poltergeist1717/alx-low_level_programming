#include <stdio.h>
#include <unistd.h>

/**
  * main: entry point
  * Description: print combination of digits
  * Return: always 0
  */
int main(void)
{
	int j, i;

	for (j = '0'; j <= '9'; j++)
	{
	for (i = '0'; i <= '9'; i++)
	{
	if (j < i)
	{
	putchar(j);
	putchar(i);
	if (j != '8' || (j == '8' && i != '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');

	return (0);
}
