// Em C temos algumas ordem de precedência envolvendo operadores
#include <stdio.h>

int main(void)
{
	int x, y;
	x = y = 5;
	// A ordem de precedência nesse caso seria x = (y = 5), ou seja, da direita para a esquerda.

	int z = 20;
	y = 2;
	x = -y + z;
	// Nesse caso, a ordem começa pela negão(-y) e em seguida, temos a adição.
	printf("%d\n", x); // O resultado é 18.


	return 0;
}
