#include "main.h"

/**
 * _strspn - searchs s for first match with accept
 * @s: the string to be searched
 * @accept: string of matching chars
 *
 * Return: retuns the len of matching chars.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i,x, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				len++;
				break;
			}
			if (accept[x+1] == '\0')
			{
				return (len);
			}

		}
		return (len);
	}
}
