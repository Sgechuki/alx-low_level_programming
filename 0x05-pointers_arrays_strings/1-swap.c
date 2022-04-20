#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer variable to be swaped using pointer
 * @b: integer variable to be swaped using a pointer
 * returns - always void
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
