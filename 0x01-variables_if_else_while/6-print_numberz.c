#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers usinf putchar'
 * Return: always zero
 */
int main(void)
{
	int n;

	for(n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
