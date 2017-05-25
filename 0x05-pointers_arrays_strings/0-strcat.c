#include "holberton.h"
/**
  * *_strcat - concatenates two strings
  * @dest: pointer type char "Hello "
  * @src: pointer type char "World!\n"
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	
	return (dest);
}
