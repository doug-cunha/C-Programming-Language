/* Nota: Só podemos utilizar o módulo quando envolver valores inteiros. */
#include <stdio.h>

int main(void)
{
	/* Temos uma ordem de precedência, nesse caso a multiplicação é realizada primeiro, em seguida a divisão é realizada, em seguida temos a adição e por fim a subtração. */
	int x = 2 + 3 * 4 / 3 - 2;
	printf("%d\n", x);
	/* Nota: Podemos alterar a ordem de precedência ao utilizar parênteses e indicar quais operações devem ser realizadas primeiro. */
	
	// Indicamos que a subtração 3-2 deve ser realizada antes da divisão.
	int y = 2 + 3 * 4 / (3 - 2);
	printf("%d\n", y);
	
	// Temos outros operadores, como o operador de módulo
	/* O operador de módulo pega o RESTO da divisão de dois números */
	
	int modulo = 5 % 2; // O resultado é 1.
	printf("O resto da divisão de 5 por 2 é %d\n", modulo);

	return 0;
}
