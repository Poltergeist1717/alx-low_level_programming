#include <stdio.h>
#include <unistd.h>

/**
  * Main - entry point
  * Description: lowercase in reverse
  * Return: always 0
  */

int main(void)
{
	char a;
	for (a = 'z'; a <= 'a'; a++)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);

}
