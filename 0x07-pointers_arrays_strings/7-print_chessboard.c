#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: an array
 *
 */

void print_chessboard(char (*a)[8])
{
	int r, clm;
	for (r = 0; r < 8; r++)
{

		for (clm = 0; clm < 8; clm++)
		{
			_putchar(a[r][clm]);
		}
		_putchar('\n');
}
}
