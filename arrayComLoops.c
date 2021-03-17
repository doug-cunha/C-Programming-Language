// Utilizando arrays com loops
#include <stdio.h>

int main(void)
{
    int size = 5;
    int minhasNotas[size];
    minhasNotas[0] = 10;
    minhasNotas[1] = 7;
    minhasNotas[2] = 5;
    minhasNotas[3] = 3;
    minhasNotas[4] = 9;

    // Utilizando o laço de repetição for para percorrer a array
    /* Inicialmente declaramos a variável i e inicializamos i como sendo 0, em seguida, fazemos a comparação, caso i seja menor que size(tamanho), então iremos incrementar uma unidade a variável i */
    for (int i = 0; i < size; i++)
    {
        // 'Chamamos' nossa array e dentro da array, colocamos a variável i, que irá armazenar os valores da array e a cada interação do loop, i será acrecentada uma vez.
        printf("%d\n", minhasNotas[i]);
    }
    


    return 0;
}