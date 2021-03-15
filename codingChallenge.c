/* Crie um programa que recebe dois valores do tipo double como inputs e calcula a hipotenusa do triângulo retângulo e exibe a saída(output) */

#include <stdio.h>
#include <math.h> // Biblioteca matemática

int main(void)
{
	double a, b, c, output;

	printf("Digite dois valores: ");
	scanf("%lf%lf", &a, &b);

	// Calcula o quadrado de a e o quadrado de b e soma ambos
	c = pow(a, 2) + pow(b, 2);
	
	// output recebe a raiz quadrada de c
	output = sqrt(c);
	printf("A hipotenusa é: %f\n", output);
	

	return 0;
}
