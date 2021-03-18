// Exemplo de programa que utiliza uma função definida pelo usuário para calcular o quadrado de um número
#include <stdio.h>

// Função retorna o quadrado do número
// Nota: y é uma cópia do argumento da função.
int quadrado(int y)
{
    return y * y;
}

int main(void)
{
    int x;
    printf("Digite um número e eu lhe retornarei o quadrado desse número: ");
    scanf("%d", &x);

    // Temos a chamada de função, nesse caso a função quadrado que tem como argumento a variável x, que é o valor digitado pelo usuário.
    printf("O quadrado de %d é %d\n", x, quadrado(x));

    return 0;
}