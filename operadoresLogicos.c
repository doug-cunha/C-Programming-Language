// C nos fornece vários operadores lógicos, sendo ele &&(conjução), ||(disjunção), !(negação) etc.

// Operadores lógicos servem para montarmos operações complexas.
#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 10;
	
	// Exemplo de expressão
	if((x % 2 == 0 || y % 2 == 0) && (x > 0 && x != 0 && y > 0) && ( x + y > 10) && (!(x > y) || (x != y)))
{
	
}
	return 0;
}
