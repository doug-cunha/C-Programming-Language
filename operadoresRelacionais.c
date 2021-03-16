// Alguns operadores relacionais que C suporta
#include <stdio.h>

int main(void)
{
	/* Os operadores relacionais que C suporta são: >, >=, <, <=, ==, != lê-se respectivamente maior, maior ou igual, menor, menor ou igual, igual, diferente */

	int a = 2;
	int b = 5;

	if(a > b)
{
	printf("%d é maior que %d\n", a, b);
}

		
	if(a >= b)
{
	printf("%d é maior ou igual a %d\n", a, b);
}

	if(a < b)
{
	printf("%d é menor que %d\n", a, b);
}

	if(a <= b)
{
	printf("%d é menor ou igual a %d\n", a, b);
}

	if(a == b)
{
	printf("%d é igual a %d\n", a, b);
}

	if(a != b)
{
	printf("%d é diferente de %d\n", a, b);
}

	return 0;
}
