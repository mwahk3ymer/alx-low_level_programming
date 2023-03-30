#include <stdlib.h>
#include <string.h>
/**
 * leet - encodes a string into 1337
 *
 * @str: the string to encode
 *
 * Return: the encoded string, or NULL if allocation fails
 */
char *leet(char *str)
{
	if (!str)
		return (NULL);

	char *result = malloc(sizeof(char) * (strlen(str) + 1));
	if (!result)
		return (NULL);

	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		char *pos = strchr(leet_chars, str[i]);
		if (pos != NULL)
			result[j] = leet_codes[pos - leet_chars];
		else
			result[j] = str[i];
	}
	result[j] = '\0';
	return (result);
}
