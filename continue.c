// Ao contrário de break, continue faz com que 'pulemos' uma etapa do nosso programa
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			// Quando i é igual a 5, continue faz com que pulemos o valor 5
			continue;
		}
		printf("%d ", i);
	}
	
	printf("\nUsou continue para pular a exibição do valor 5\n");

	return 0;
}