// Estrutura do while loop
// While loop consegue fazer tudo que o for loop faz
#include <stdio.h>

int main(void)
{
	// Declaramos e inicializamos a variável i
	int i = 0;
	// Enquanto essa condição for verdadeira, a estrutura while irá executar
	while(i < 10)
{
	printf("%d\n", i);
	i++; // Incrementa i em uma unidade a cada 'rodada do loop'
}



	return 0;
}
