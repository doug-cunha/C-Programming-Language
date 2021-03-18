// Ponteiros em C
#include <stdio.h>

int main(void)
{
    int fatiasPizza = 20;
    // % é um operador de endereçamento de memória
    int *p = &fatiasPizza;

    printf("Fatias: %d\n", fatiasPizza);

    // O asterístico '*' é chamado de operador indireto
    // Estamos utilizando *p que é ponteiro que contém o valor da variável fatiasPizza, já que o ponteiro *p apontou para o lugar da memória em que fatiasPizza está armazenado.
    printf("Fatias utilizando ponteiros: %d\n\n", *p);

    // Modificando o valor de fatiasPizza
    fatiasPizza = 25;
    
    // Com isso temos a prova que, mesmo que mudemos o valor da variável, o ponteiro irá apontar para o endereço da memória em que a variável está.
    printf("Fatias: %d\n", fatiasPizza);
    printf("Fatias após a mudança da variável: %d\n\n", *p);

    // Operador indireto, ou seja, estamos mudando o valor do ponteiro de forma indireta.
    *p = 30;
    printf("Fatias: %d\n", fatiasPizza);
    printf("Fatias após a mudança da variável: %d\n\n", *p);

    // Caso queiramos incrementar ou decrementar, devemos utilizar o ponteiro entre parênteses seguido do operador de incremento ou decremento, pois o operador de incremento/decremento tem maior prioridade em comparação com o operador de ponteiro.

    fatiasPizza++;

    // Ponteiro fica entre parênteses e incrementa uma unidade. 
    (*p)++;

    printf("Fatias: %d\n", fatiasPizza);
    printf("Fatias após o incremento: %d\n", *p);


    return 0;
}