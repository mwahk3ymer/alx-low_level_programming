#include <stddef.h>
/**
 * _strstr - finds first occurence of a substring  in a string
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: pointer to the start of the located substring, or NULL if
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 == *p2 && *p2 != '\0')
		{
			++p1;
				++p2;
		}

		if (*p2 == '\0')
		{
			return (haystack);
		}

		++haystack;
	}
	return (NULL);
}
