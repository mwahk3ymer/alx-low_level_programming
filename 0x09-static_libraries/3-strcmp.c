/**
 * _strcmp -compares two stings
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return:an int less than, equal to, or greater than 0 if s1
 * found, respectively to be <, to match or > than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}
