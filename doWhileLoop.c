// A estrutura do..while é um pouco diferente, pois ela irá executar ao menos uma vez independemente da condição.
#include <stdio.h>

int main(void)
{	
	int input;
	
	// Executa ao menos uma vez
	do
{	
	// Solicita um número ao usuário e em seguida exibe o número
	printf("Digite um número entre 0 - 9: ");
	scanf("%d", &input);
	printf("%d\n", input);
// Analisa a condição, caso seja verdadeira o loop irá rodar
} while(input < 0 || input > 9);


	return 0;
}
