// Operadores de incremento e decremento
#include <stdio.h>

int main(void)
{
	// Operador de incremento

	int pizzasToEat = 123;
	// Incrementa uma unidade a pizzasToEat
	pizzasToEat++; // Operador unário, pois temos apenas um operando.
	// É a mesma coisa que fazer pizzasToEat = pizzasToEat + 1;
	
	int pizzasToEat_2 = 100;
	int output = pizzasToEat_2++;
	printf("Pizzas to eat: %d\n", output);
	/* O resultado deveria ser 101, no entanto, pizzasToeat_2++ é um operador de 'pós-incremento', ou seja, o incremento só sera realizado após a variável output receber o valor 100 original. */

	/* Para resolver isso, utilizamos o operador de 'pŕe-incremento', basta utilizar o ++ na frente da variável. */

	int pizzasToEat_3 = 100;
	int output_2 = ++pizzasToEat_3;
	printf("Pizzas to eat: %d\n", output_2);
	// O resultado será 101.	

	// Operador de decremento
	
	int pizzasToEat_4 = 100;
	int output_3 = pizzasToEat_4--;
	printf("Pizzas to eat: %d\n", output_3);
	// O valor ainda será 100, pois estamos utilizando o operador de pós-decremento.

	// Para resolver isso, utilizaremos o operador de pŕe-incremento.

	int pizzasToEat_5 = 100;
	int output_4 = --pizzasToEat_5;
	printf("Pizzas to eat: %d\n", output_4);
	// O resultado agora será 99.

	return 0;
}
