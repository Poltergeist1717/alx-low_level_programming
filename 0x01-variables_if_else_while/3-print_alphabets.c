#include <stdio.h>
#include <unistd.h>

/**
  * main - entry point for program
  * Descritption: program that prints alphabets in lower and upper cases respectively
  * Return: returns 0 always
  */

int main(void)

{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
