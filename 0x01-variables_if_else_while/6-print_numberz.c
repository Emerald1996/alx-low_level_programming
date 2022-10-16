#include <stdio.h>

/**
 * main- prints 0123456789 using putchar
 * Return: 0 Always (Success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);

}
