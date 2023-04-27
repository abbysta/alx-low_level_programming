#include "main.h"

/**
 * check checks for uppercase character.
 * Returns 1 if c is uppercase
 * Returns 0 otherwise.
 */

int _isuper(int c)
{
if ((c >= 'A') && (c <= 'z'))
{
return (1);
}
return (0);
}
