#include <stdio.h>
#include <unistd.h>
/**
 * main - entry 
 * Description - this program prints alphabets in lowercase
 * Return: returns 0 (success)
  */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
