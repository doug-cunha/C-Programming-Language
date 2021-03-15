// C é uma linguagem fortemente tipada, ou seja, para cada pedaço de dado temos um tipo específico de dado.

#include <stdio.h>

int main(void)
{
	// Temos dois tipos de Type Casting, o Implicito e o explicito.

	// O implicito não há perda de dado, ou seja, o compilador identifica automaticamente.
	// Ex: double a = 1.00 seria a mesma coisa que int a = 1, ou seja, não há perda de dados durante o processo.

	// O explicito há perda de dados, ou seja, você deixa explicito pro compilador que haverá perda de dados
	// Ex: double a = 1.85 transformando isso pra int ficaria int a = 1, note que a parte fracionária 0.85 foi perdida.

	// Para converter um dado para outro tipo, utilizamos parênteses e dentro desses parênteses colocamos o tipo de dado que queremos converter, bem na frente da variável.

	double x = 2.54;
	// Será exibido 2.54 naturalmente.
	printf("%f\n", x);
	
	// Convertendo para inteiro
	
	// Note que o valor de x é do tipo double, mas utilizamos o type casting para converter de double para int, no entanto, para exibirmos esse valor preciamos utilizar o %d para mostrar o valor.
	printf("%d\n", (int) x);


	return 0;
}
