/* Arrays são uma coleção de dados armazenados em uma variável, e essa array deve ter o mesmo tipo de dado. Além disso, uma array tem um tamanho(size) que é estático, ou seja, o tamanho não se altera. */
// Nota: O primeiro elemento de um array começa na posição 0.
#include <stdio.h>

int main(void)
{
    // Estrutura de um array
    /* 
        int minhasNotas[tamanho da array vai aqui dentro];
    */

   // Há duas formas de utilizar uma array

    // Essa é a primeira forma, onde passamos o tamanho da array sendo 5 e em seguida, chamamos nossa array pelo nome e dentro colocamos a posição da nossa memóroa em que irá receber a nossa nota.
    int minhasNotas[5];
    minhasNotas[0] = 5;
    minhasNotas[1] = 8;
    minhasNotas[2] = 7;
    minhasNotas[3] = 0;
    minhasNotas[4] = 10;
    // Exibirá o valor 10, que é o elemento 4 da nossa array.
    printf("%d\n", minhasNotas[4]);

    // A outra forma de utilizar um array é passando todos os valores de vez
    
    // Note que passamos o tamanho da array como sendo 5, e para cada lugar na posição da array, começando a partir do 0, será armazenado a sua respectiva nota.
    int minhasNotasDois[5] = {5, 8, 7, 0, 10};
    // Exibirá o valor 8, que é o elemento 1 da nossa array.
    printf("%d\n", minhasNotasDois[1]);

    return 0;
}