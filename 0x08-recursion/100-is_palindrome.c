/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
}

/**
 * is_palindrome_helper - Compares the first and last characters of a string,
 *                        then recursively calls itself with the middle of the
 *                        string until the entire string has been compared.
 * @s: The string to check.
 * @start: The index of the first character to check.
 * @end: The index of the last character to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len == 0)
return (1);
else
return (is_palindrome_helper(s, 0, len - 1));
}
