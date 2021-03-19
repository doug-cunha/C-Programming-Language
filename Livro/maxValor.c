// Programa que calcula o maior valor entre 3 números
#include <stdio.h>

// Função maxValor têm como entrada 3 valores inteiros e devolve um valor inteiro
int maxValor(int numUm, int numDois, int numTres)
{
    // Declaramos que numUm é o maior apenas para agilizar a comparação
    int max = numUm;

    // Realiza os testes
    if(numDois > max)
    {
        // Caso seja verdadeiro, max receberá o maior valor.
        max = numDois;
    }
    if(numTres > max)
    {
        max = numTres;
    }

    // Retorna o maior valor encontrado.
    return max;
}

int main(void)
{
    int x, y, z;

    // Solicita três números inteiros ao usuário
    printf("Digite três números inteiros e eu lhe direi o maior entre eles!: ");
    scanf("%d%d%d", &x, &y, &z);

    // Exibe o maior número inteiro encontrado
    printf("O maior número entre %d %d e %d é %d\n", x, y, z, maxValor(x, y, z));

    return 0;
}