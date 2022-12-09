#include <stdio.h>
/**
  * main - entry
  * Decription - prints alphabets except e and q
  * Return - returns 0
  */

int main(void)
{
	char letter;
	
	for (letter = a; letter <= z; letter++)
	{
	putchar(letter)
	
	if (letter == e || letter == q)
	{
		continue;
	}
	putchar(letter)
	}
	return (0);
}
