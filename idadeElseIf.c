// Programa que usa a estrutura else if para avaliar uma idade.
#include <stdio.h>

int main(void)
{

	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if(idade >= 18 && idade < 65)
{
	printf("Adulto!\n");
}

	else if(idade >= 65)
{
	printf("Idoso!\n");
}

	else
{
	printf("Menor de idade!\n");
}

	return 0;
}
