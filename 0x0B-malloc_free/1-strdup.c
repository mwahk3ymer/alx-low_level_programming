#include <stdlib.h>
#include <string.h>
/**
 * _strdup -returns a ouinter
 * @str: strin to duplcate
 *
 * Return: if str is NULL RETURN NULL
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	dup_str = malloc(len * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}
	memcpy(dup_str, str, len);
	return (dup_str);
}
