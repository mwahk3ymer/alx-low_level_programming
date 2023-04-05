/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
/* Handle negative exponent */
if (y < 0)
return (-1);

/* Base case: x^0 is 1 */
if (y == 0)
return (1);

/* Recursive case: compute x^(y-1) and multiply it by x */
return (x * _pow_recursion(x, y - 1));
}
