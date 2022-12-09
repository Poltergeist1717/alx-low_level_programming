#include <stdio.h>
/**
  * main - entry
  * Description - prints alphabets except e and q
  * Return - always 0
  */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'e' && letter == 'q')
	{
		continue;
	}
	{
	putchar(letter);
	}
	}
	putchar('\n')
	return (0);
}
