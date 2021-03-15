
#include <stdio.h>

int main(void)
{
	// int, float, double
	int dogs = 6;

	// double é considerado melhor que float, pois há uma maior precisão no seu valor. 
	
	// O valor 111.1111 será exibido com precisão, ao contrário do tipo float que não exibiria esse valor com precisão.
	double num = 111.1111;
	printf("%f\n", num);


	return 0;
}
