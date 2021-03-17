// Utilizando loops em uma array multidimensional
#include <stdio.h>

int main(void)
{

    int minhasNotas[2][3] = {
        {12, 23, 45},
        {64, 78, 89}
    };

    /* Entendendo o funcionamento: Inicialmente o primeiro for será executado e como i que vale 0 é menor que 2, a condição sendo verdadeira irá iniciar o segundo for, e dentro desse segundo for temos j sendo 0 e a condição sendo verdadeira. Agora atenção: Como i = 0 e j = 0 e ambos satisfazem as condições, temos que printf sera executado e mostrará o resultado da primeira linha e da primeira coluna, após isso, temos que o segundo for ainda continua verdadeiro certo? Afinal, j que antes era 0 agora é 1, e 1 é menor que 2, logo o segundo for será executado novamente e o i será preservado em 0 ainda. Ou seja, primeiro irá rodar toda a segunda estrutura for até que a condição seja falsa e em seguida, o primeiro for irá incrementar uma unidade a i, após incrementar irá cair no segundo for e continuar tudo novamente até que todo o segundo for seja percorrido. É assim que funciona esse modelo aninhado! */


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", minhasNotas[i][j]);
        }
        // Para deixar a saída como sendo uma tabela
        printf("\n");
    }


    return 0;
}