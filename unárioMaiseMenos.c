#include <stdio.h>

int main(void)
{
	
	int money = 25;
	int bill = 15;
	
	/* Note que temos o -bill, esse menos é chamado de operador unário, ou seja, só necessita de um operando. O resultado será 40 pois 25 -(-15) = 40. */
	int total = money - -bill;
	printf("%d\n", total);



	return 0;
}
