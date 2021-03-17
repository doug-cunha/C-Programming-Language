// Arrays multidimensionais
#include <stdio.h>

int main(void)
{
    // Temos que a primeira array[2] é a linha e a segunda array[4] é a coluna
    // Em seguida, passamos os valores para as linhas e colunas, separando cada linha por uma virgula.
    int minhasNotas[2][4] = {
        {8, 2, 4, 5},
        {10, 7, 9, 6}
    };

    // Nota: Se o número de linhas/colunas não for declarado, irá dar um problema de compilação.

    printf("%d\n", minhasNotas[0][3]);


    return 0;
}