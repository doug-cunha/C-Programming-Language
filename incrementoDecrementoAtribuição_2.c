// Parte dois dos operadores de incremento e decremento
#include <stdio.h>

int main(void)
{
	int pizzasToEat = 100;
	printf("Pizzas to eat: %d\n", pizzasToEat);

	/* Isso é a mesma coisa que fazer pizzasToEat = pizzasToEat + 100; */
	pizzasToEat += 100;
	printf("Pizzas to eat: %d\n", pizzasToEat);

	// Podemos utilizar outros operadores também.
	
	// Operador de subtração
	pizzasToEat -= 100;
	printf("Pizzas to eat: %d\n", pizzasToEat);

	// Operador de multiplicação
	pizzasToEat *= 100;
	printf("Pizzas to eat: %d\n", pizzasToEat);
	
	// Operador de divisão
	pizzasToEat /= 100;
	printf("Pizzas to eat: %d\n", pizzasToEat);

	// Operador de módulo
	pizzasToEat %= 10;
	printf("Pizzas to eat: %d\n", pizzasToEat);	

	return 0;
}
