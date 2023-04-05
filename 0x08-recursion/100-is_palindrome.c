/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * is_palindrome_helper - checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the string
 * @end: the ending index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
/* Base case: string has 0 or 1 characters */
if (start >= end)
return (1);


if (s[start] == s[end])
return (is_palindrome_helper(s, start + 1, end - 1));
return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen(s);

/* Empty string is a palindrome */
if (len == 0)
return (1);

/* Call helper function with start and end indices */
return (is_palindrome_helper(s, 0, len - 1));
}
