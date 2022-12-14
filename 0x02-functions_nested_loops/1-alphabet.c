#include "main.h"

/**
  * main - Entry point
  * Description: a function that prints the alphabet,
  * in lowecase followed by a new line
  * Return: returns void
  * Void - prints void
  */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
