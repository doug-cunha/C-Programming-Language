// Exemplo de uso de strings em C
#include <stdio.h>

int main(void)
{	
	/* Strings são uma sequência de caracteres */
	printf("Hello, %s\n", "Douglas"); // Passamos o nome Douglas como parâmetro

	/* Podemos utilizar strings de outra forma, para isso utilizamos o tipo de dado char seguido de um identificador válido e seguido de uma estrutura de dados chamada array. */

	// 31 é o número de caracteres que queremos colocar para um possível nome.
	char nome[31];

	printf("Digite o seu nome: ");

	/* Nota: o tipo de dado é char no entanto, utilizamos o %s para indicar que iremos ler um valor do tipo string vindo do usuário, além disso, não utilizamos o operador de endereçamento para indicar em qual lugar da memória a variável nome está. */
	scanf("%s", nome);

	printf("Hello, %s\n", nome);


	/* Nota: Os espaços não são contabilizados em strings, caso queira pegar nome e sobrenome faça isso de forma separada. */

	return 0;
}
