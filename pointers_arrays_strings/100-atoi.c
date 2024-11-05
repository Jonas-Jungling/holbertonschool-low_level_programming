#include "main.h"

/**
* _atoi - convert string
* description: convert string to an integer
* @s: string to convert
* Return: a number
*/

int _atoi(char *s)
{
	int nb = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			nb = (nb * 10) + (*s - '0');
		}
		else if (nb != '0')
		{
			break;
		}
		s++;
	}
	return (nb * sign);
}
