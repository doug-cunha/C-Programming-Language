// Função em C
#include <stdio.h>

int fatorial(int n)
{   
    // Declaramos e inicializamos factorial como sendo 1
    int factorial = 1;

    // Utilizamos for para percorre o valor digitado pelo usuário e em seguida, crementa-lo
    for(int i = n; i >= 1; i--)
    {
        // Factorial irá receber o resultado da multiplicação por i
        factorial *= i;
    }

    // Retornamos o resultado da nossa expressão
    return factorial;  
}

// Função void não tem nenhuma sáida por que não existe um return, ela apenas devolve o printf quando é chamada.
void outputFatorial(int input)
{
    // Basicamente chama a função fatorial dentro da função outputFatorial e exibe o valor
    printf("O fatorial de %d é %d\n", input, fatorial(input));
}

int main(void)
{
    int fact;
    
    // Solicitamos um número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &fact);
    
    // Chamamos a função outputFatorial que utiliza uma função chamada fatorial para calcular o fatorial de um número para gente e devolve esse valor.
    outputFatorial(fact);

    return 0;
}