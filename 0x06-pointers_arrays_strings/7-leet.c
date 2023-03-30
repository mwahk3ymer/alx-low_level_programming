/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 * Return: The encoded string, or NULL if allocation fails.
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

	while (*str != '\0')
	{
		char *encoded_line = leet(str);

		write(STDOUT_FILENO, encoded_line, strlen(encoded_line));

		free(encoded_line);

		str = strchr(str, '\n');
		if (str != NULL)
			str++;
	}

	return (result);
}
