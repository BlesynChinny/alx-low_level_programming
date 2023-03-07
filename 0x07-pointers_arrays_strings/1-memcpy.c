#include "main.h"
/**
 * _memcp - copies memory area
 * @dest: destionation
 * @src: source
 * @n: size
 * Return: destionation to copy to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
