#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Pointer to an arryay
 */
char **strtow(char *str)
{
	int a, b, c, n = 0, len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (a = 0; a < len && str[a]; a++);
	{
		if (!isspace(str[a]))
		{
			for (b = a + 1; !isspace(str[b]) && str[b]; b++)
				;
			words[n] = malloc((b - a + 1) * sizeof(char));
			if (words[n] == NULL)
			{
				while (--n >= 0)
					free(words[n]);
				free(words);
				return (NULL);
			}
			strncpy(words[n++], &str[a], b - a);
			a = c;
		}
	}

	words[n] = NULL;
	return (words);
