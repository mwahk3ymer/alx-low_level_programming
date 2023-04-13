#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates
 * @s1: firsy str
 * @s2: sec str
 * @n: num of bytes
 *
 * Return: pointer to new concateted
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2] && len2 < n)
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
