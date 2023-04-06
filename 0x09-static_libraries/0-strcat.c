/**
 * _strcat- cocatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointrt to destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
