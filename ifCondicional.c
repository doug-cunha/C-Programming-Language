// Exemplo de estrutura condicional if
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool pizzaSaudavel;
	int temp;
	printf("Você acredita no poder da pizza? (1 para V 0 para F)  ");
	scanf("%d", &temp);
	
	// pizzSaudavel recebe o valor digitado pelo usuário
	pizzaSaudavel = temp;

	// Analisa a condição
	if(pizzaSaudavel)
{
	printf("Pizza é saúdavel\n");
}




	return 0;
}

