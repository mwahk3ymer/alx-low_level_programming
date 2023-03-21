#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the of Jack Bauer, from 00:00 to 23:59.
 */
void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
