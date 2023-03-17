#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int f;

	for (f = 0; f < 52; f++)
	{
		putchar(alp[f]);
	}
	putchar('\n');
	return (0);
}
