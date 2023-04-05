/**
 * wildcmp_helper - recursive helper function for wildcmp
 * @s1: first string
 * @s2: second string with wildcard *
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp_helper(char *s1, char *s2)
{
    /* Base case: both strings are empty */
if (*s1 == '\0' && *s2 == '\0')
return (1);


if (*s2 == '*')
return (wildcmp_helper(s1, s2 + 1) ||
(*s1 != '\0' && wildcmp_helper(s1 + 1, s2)));


/* If first characters match, compare the rest of the strings */
if (*s1 == *s2)
return (wildcmp_helper(s1 + 1, s2 + 1));

/* Not identical */
return (0);
}

/**
 * wildcmp - compares 2 strings and returns 1 if they can be identcal
 * @s1: first string
 * @s2: second string with wildcard *
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
/* Call helper function with initial strings and return result */
return (wildcmp_helper(s1, s2));
}
