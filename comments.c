// Comentários em C
#include <stdio.h>

int main(void)
{	
	// Em C, temos dois tipos de comentários
	// Os comentários em linha, que são utilizados para descrever o que uma linha de programa faz, para isso, utilizamos duas barras
	
	/* E temos o comentário de múltiplas linhas, que utilizamos para descrever o que um programa ou uma função faz e para isso, precisamos de várias linhas, por isso utilizamos essa forma de comentário, para utilizar os comentários de múltiplas linhas utilize uma barra e um asterístico e feche os comentários com */

	char nome[30];
	scanf("%s", nome);
	printf("Hello, %s\n", nome);

	return 0;
}
