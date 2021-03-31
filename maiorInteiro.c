//Programa que calcula o maior número entre 3 números inteiros
#include <stdio.h>

//Inicio da função main
int main(void)
{
    //Armazena os valores
    int x, y, z, maior;

    //Solicita os números ao usuário
    printf("Digite três números: ");
    scanf("%d%d%d", &x, &y, &z);

    //Declaramos uma variável auxiliar que inicializa maior como sendo o valor de x
    maior = x;

    //Realiza as comparações
    if(y > maior)
    {
        maior = y;
    }

    if(z > maior)
    {
        maior = z;
    }

    else
    {
        maior = x;
    }

    //Exibe o maior número encontrado
    printf("O maior número entre %d %d e %d é: %d\n", x, y, z, maior);

    return 0; //Indica que o programa foi concluido com sucesso
} //Fim da função main