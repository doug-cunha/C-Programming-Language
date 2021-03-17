// While loop aninhado
#include <stdio.h>

int main(void)
{
	int i = 0, k;

	while(i < 11)
{
	printf("%d ", i);
	k = i - 1; //Recebe o valor de i e decrementa
	i++; // Incrementa uma unidade em i
	
	// k que recebe o valor de i faz a comparação
	while(k >= 0)
{
	printf("%d ", k);
	k--; // Decrementa uma unidade
}
	
	printf("\n");	
}
	return 0;
}
