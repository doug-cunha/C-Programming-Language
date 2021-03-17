/* Break é utilizado para quando nós quisermos sair de uma estrutura de repetição ou condicional. */
#include <stdio.h>

int main(void)
{
	// Executamos um laço for normalmente
	for(int i = 0; i < 60; i++)
{	
	// Exibimos o valor de i
	printf("%d\n", i);
	
	// A condição aqui é i ser igual a 9
	if(i == 9)
{	
	// Caso i seja igual a 9, então brak irá ser executado fazendo com que a estrutura for seja finalizada.
	break;
}

}


	return 0;
}
