#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Description: prints _putchar
  * Return: always 0
  */

int main(void)
{
	char msg[] = "_putchar\n";
	int i;

	for (i = 0; i < 13; i++)
	{
	if (msg[i] == '\n')
	{
	putchar('\n');
	break;
	}
	else
	{
	putchar(msg[i]);
	}
	}
	return (0);
}
