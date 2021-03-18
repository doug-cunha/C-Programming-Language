// Utilizando ponteiros em funções
#include <stdio.h>

// Função é do tipo void, ou seja, não nos retorna nada
void printArray(int arr[], int size)
{
    // Percorre a array
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}


int main(void)
{
    // Array
    int pedacoPizza[] = {4, 5, 4, 6, 3, 2};

    // Chamamos a função printArray e passamos dois argumentos
    printArray(pedacoPizza, 6);

    return 0;
}