#include <stdio.h>

/**
 * main - The main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 7; i++)
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 8; j++)
		for (j = i + 1; j < 9; j++)
		{
		for (k = j + 1; k < 9; k++)
		for (k = j + 1; k < 10; k++)
		{
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');
		if (i < 7)
		{		
		putchar(',');	
		putchar(' ');
		}
		}
		}		
		}	
	putchar('\n');
	return (0);
}
