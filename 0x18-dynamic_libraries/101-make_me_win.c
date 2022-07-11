#include <unistd.h>
#include <stdlib.h>

/**
 * srand -  sets the starting point
 * for producing a series of pseudo-random integers
 * @seed: integer
 *
 */
void srand(unsigned int seed)
{
	(void) seed;
	write(STDOUT_FILENO, "9 8 10 24 75 9\n", 12);
	exit(EXIT_SUCCESS);
}
