#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets except q and e'
 * Return: always zero
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
