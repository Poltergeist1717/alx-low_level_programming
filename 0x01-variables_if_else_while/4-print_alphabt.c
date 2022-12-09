#include <stdio.h>
/**
  * main - entry point
  * Description: - prints alphabets except e and q
  * Return - always 0
  */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'e')
	{
		continue;
	}
	else if (letter == 'q')
	{
		continue;
	}
	{
	putchar(letter);
	}
	}
	return (0);
}
