/**
 * _sqrt_helper - returns the natural square root of a number
 * @n: the number to compute the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
int sqrt = guess * guess;

if (sqrt == n)
return (guess);

if (sqrt > n)
return (-1);

return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);

return (_sqrt_helper(n, 1));
}
