// Vimos duas estruturas, if e else, agora iremos ver a estrutura else if...

#include <stdio.h>

int main(void)
{
	/* Como exemplos iremos construir um programa que recebe uma determinada temperatura em C e avalia se está quente, amêno ou frio. */

	double temperatura;

	printf("Digite a temperatura em graus celsius: ");
	scanf("%lf", &temperatura);

	// Estrutura condicional
	if(temperatura > 25)
{
	printf("Está quente!\n");
}
	// Avalia outra condinção, isso é a estrutura else if
	else if(temperatura <= 25 && temperatura >= 20)
{
	printf("Temperatura está amena!\n");
}

	else
{
	printf("Está frio!\n");
}

	return 0;
}
