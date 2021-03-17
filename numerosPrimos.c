#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{

// Declaramos que ePrimo é true por padrão

	int input;	
	int ePrimo = true;

// Solicita um número ao usuário
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &input);

/* Aqui é um pouco diferente, i irá receber o valor da raiz quadrada que o usuário digitar e em seguida, irá avaliar a condição i > 1? se sim, então o bloco de comando será executado. Caso o resto da divisão do número digitado pelo valor de i for igual a 0, então a variável ePrimo passa a ser falsa. */
	for(int i = sqrt(input); i > 1; i--)
	{
		printf("%d\n", i);
		if(input % i == 0)
		{
			ePrimo = false;
		}
	}
// Caso a estrutura acima não for executada, temos que ePrimo terá como valor lógico true, exibindo a função printf abaixo.
	if(ePrimo)
	{
		printf("É primo!\n");
	}

// Caso o valor da variável ePrimo se torne falso devido a estrutura if no loop for, então o número não será primo.
	else
	{
		printf("Não é primo!\n");
	}


	return 0;
}
