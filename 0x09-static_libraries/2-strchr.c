#include <stddef.h>
/**
 * _strchr - locates a char  in a string
 * @s: pointer to string
 * @c: char to search for
 *
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
