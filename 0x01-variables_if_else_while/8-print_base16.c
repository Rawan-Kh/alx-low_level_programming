#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	char s;

	for (r = 48; r < 58; r++)
		putchar(r);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
