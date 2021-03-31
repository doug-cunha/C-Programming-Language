#include <stdio.h>

//Função fibonacci devolve um valor do tipo long int e têm como parâmetro, um valor long int
long fibonacci(long x)
{
    //Caso base, x ser igual a 0 ou x ser igual a 1
    if(x == 0 || x == 1)
    {
        return x; //Retorna o valor de x
    }

    /*Caso x seja diferente de 0 ou de 1, retorna a própria função fibonacci, aplicando a recursividade. Nesse caso, chamamos a função duas vezes, sendo na primeira vez x será decrementado em uma unidade e na segunda vez, a primeira chamada será somada com a segunda chamada que decrementa duas unidades.*/
    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

int main(void)
{
    long resultado, numero;
    printf("Digite um número inteiro: ");
    scanf("%ld", &numero);

    resultado = fibonacci(numero);

    printf("Fibonacci(%ld) = %ld\n", numero, resultado);

    return 0;
}