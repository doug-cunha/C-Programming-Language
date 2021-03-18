// Refatoração == Melhorar o nosso código, aproveitar melhor dele
#include <stdio.h>

// Função printArray tem como parâmetro uma array e o tamanho dessa array
void printArray(int arr[], int size)
{
    // Size seria o tamanho da array, é obrigatório.
    for(int i = 0; i < size; i++)
    {
        // Como a entrada é uma array, temos que a estrutura for vai percorrer essa array utilizando a variável i que incrementa uma unidade
        printf("%d ", arr[i]);
    }
}



int main(void)
{
    // Minhas notas
    int minhasNotas[][3] = {
        {6, 8, 10},
        {7, 9, 8}
    };

    // Aqui temos que for irá percorrer a quantidade de linhas da array
    for(int i = 0; i < 2; i++)
    {
        // Chamamos a função printArray e em seguida, passamos nossa array grades seguido da variável i que é responsável pelas linhas e por fim, passamos 3 como sendo o tamanho da array
        // Esse 3 é o tamanho das colunas.

        /* Primeiramente executamos a função printArray que irá calcular toda a primeira linha e a primeira coluna, em seguida, voltamos para a primeira estrutura for que irá incrementar o valor de i em uma unidade, após isso chamamos a função printArray novamente que irá calcular nossa primeira linha. */
        printArray(minhasNotas[i], 3);
        printf("\n");
    }


    return 0;
}