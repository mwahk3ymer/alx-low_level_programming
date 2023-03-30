#include<stddef.h>
/**
 * cap_string - Capitalizes all words in a given string
 * @str: the input string to be capitalized
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *str)
{
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
str[i - 1] == '{' || str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}
}
return (str);
}
