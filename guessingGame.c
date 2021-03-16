// O usuário terá que adivinhar um número de 0 a 5
// A saída mostrara se o número digitado é igual ao número 'sorteado'

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // Nos permite trabalhar com número aleatórios.
#include <time.h> // Nos permite trabalhar com a função time.
int main(void)
{
	// Gerando um número 'pseudo número aleatório'

	int maxValor = 5;

	// A função time nos fornece um valor que é passado para a função srand. Estamos pegando esse valor do tempo.
	srand(time(NULL));
	
	// randomNumero recebe valores da função rand.
	int randomNumero = rand() % maxValor + 1; // Pega os valores do resto da divisão por 6.
	
	// Exibimos os valores 'sorteados'
	printf("%d\n",randomNumero);


	printf("Adivinhe um número de 0 a %d: ", maxValor);
	
	int input;
	scanf("%d", &input);

	// Analisa se o número digitado é igual ao número sorteado
	if(input == randomNumero)
{	
	// Exibe na tela caso a pessoa tenha acertado o número
	printf("Parabéns, o número sorteado foi %d e você digitou %d\n", randomNumero, input);
}

	else
{
	// Exibe na tela caso a pessoa tenha errado o número
	printf("Que pena, o número sorteado foi %d e você digitou %d\n", randomNumero, input);
}
	return 0;
}
