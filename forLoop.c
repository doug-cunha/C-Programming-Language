// For loop é um das três opções de estrutura de repetição que C nos oferece.

#include <stdio.h>

int main(void)
{
	/* A estrutura for tem o seguinte formato: for(inicialização, condição, incremento/decremento) em seguida abrimos chaves e colocamos nosso código. Inicialmente teremos a inicialização e em seguida, será executado a comparação, caso a condição seja verdadeira o bloco de comando abaixo será executado e por fim, será adicionado uma unidade a variável i(contador). */
for(int i = 1; i <= 10; i++)
{
	printf("%d\n", i);

}

// Outro exemplo utilizando scanf
int max;
printf("Digite um número inteiro positivo: ");
scanf("%d", &max);
// Agora a condição vai ser dada pelo usuário, ao passar o valor de entrada para a variável max.
for(int i = 1; i <= max; i++)
{
	printf("%d\n", i);
}


return 0;
}
