#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if(c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
		else
		{
			c=+2;
		}
	}
	putchar('\n');
	return (0);
}
