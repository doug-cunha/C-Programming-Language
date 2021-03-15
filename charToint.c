// Convertendo caractere para inteiro
#include <stdio.h>

int main(void)
{
	char ASCII;
	printf("Digite um caractere: ");
	scanf("%c", &ASCII);
	// Note que no lugar de %c temos o %d, o %d nos indica o valor do caractere na tabela ASCII.
	printf("%d\n", ASCII);

	return 0;
}
