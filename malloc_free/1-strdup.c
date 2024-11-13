#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - return a pointer
 * Description: return pointer, which contain a cp of the str given as a param
 * @str: string
 * Return: NULL or pointer to the duplicate string
*/

char *_strdup(char *str)
{
	char *str_bis;
	int length;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	str_bis = malloc((length + 1) * sizeof(char));

	if (str_bis == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str_bis[i] = str[i];
		i++;
	}
	str_bis[i] = '\0';
	return (str_bis);
}
