#include <stdio.h>
/**
 * main - print the alphabets
 *
 * Return: always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(alp[b]);
	}
	putchar('\n');
	return (0);
}

