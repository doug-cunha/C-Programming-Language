// Operadores ternários

#include <stdio.h>

int main(void)
{

	double dinheiro = 2000;
	double custo = 25;

	/* Operador ternário, onde temos uma condição seguida da interrogação que funciona como true ou false e em seguida, exibimos o código, caso a condição seja falsa representamos o else como sendo dois pontos : e digitamos o nosso código finalizando com um ponto e virgula padrão. */

	dinheiro > custo ? printf("Você pode pagar!\n") : printf("Desculpa, você não pode pagar! Você precisa de R$%.2lf para poder comprar!\n", custo - dinheiro);

/* Jeito normal de se fazer 

	if(dinheiro > custo)
{
	printf("Você pode pagar!\n");
}

	else
{
	printf("Desculpa, você não pode pagar! Você precisa de %lf para poder comprar!\n", custo - dinheiro);
}

*/
	return 0;
}
