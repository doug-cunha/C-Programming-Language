#include <stdio.h>

int main(void)
{
	// Digamos que temos 25000 cachorros, como representariamos esse valor utilizando notação científica?
	// Utilizamos a letra 'e' que significa vezes 10, seguido do valor da potência(quantidade de zeros).
	int dogs = 2.5e4;

	printf("%d\n", dogs);

	/*Conversor de caracteres
	-------------------------
	
	%f -> Números decimais
	%e -> Notação científica
	%g -> O computador decide
	*/

	double dogs_2 = 2.5e4;
	printf("%f\n%e\n%g\n", dogs_2, dogs_2, dogs_2);

	
	printf("Quantos cachorros você tem?: ");
	double dogs_3;
	
	scanf("%lf", &dogs_3);
        printf("%f\n%e\n%g\n", dogs_3, dogs_3, dogs_3);

	return 0;
}
