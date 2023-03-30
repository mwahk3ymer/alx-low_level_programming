/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;

 /* Capitalize the first letter */
if (str[0] != '\0' && islower(str[0]))
str[0] = toupper(str[0]);

 /* Capitalize subsequent letters after separators */
for (i = 1; str[i] != '\0'; i++)
{
if (is_separator(str[i - 1]) && islower(str[i]))
str[i] = toupper(str[i]);
}

return (str);
}

/**
 * is_separator - Determines if a character is a word separator.
 * @c: The input character.
 *
 * Return: 1 if c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
return (isspace(c) || c == ',' || c == ';' || c == '.' ||
c == '!' || c == '?' || c == '"' || c == '(' ||
c == ')' || c == '{' || c == '}');
}
