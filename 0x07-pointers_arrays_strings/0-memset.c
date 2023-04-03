/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n--)
        *ptr++ = b;

    return s;
}
