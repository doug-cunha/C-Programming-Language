// Exemplo da estrutura switch
#include <stdio.h>

int main(void)
{
	// Programa que avalia 
	int fatias;
	
	// Solicita a quantidade de pizzas que a pessoa comeu
	printf("Digite a quantidade de fatias que você comeu: ");
	scanf("%d", &fatias);
	
	// Faz a analise de casos
	switch(fatias)
{
	case 0:
		printf("Parabéns, você é uma pessoa fitness haha\n");
		break;

	case 1:
		printf("Você comeu uma única fatia, parabens!\n");
		break;

	case 2:
		printf("Poxa, duas fatias complica a sua saúde!\n");
		break;

	case 3:
		printf("3 fatias? você está fazendo um péssimo trabalho com a sua saúde!\n");
		break;

	// Caso padrão seria parecido com o else
	default:
		printf("Aproveite o seu possível problema cardíaco!\n");
		break;
}

	return 0;
}
