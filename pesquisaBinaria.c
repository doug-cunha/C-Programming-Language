/*Um algoritmo de pesquisa binária analisa um array até encontrar o resultado solicitado, para isso sempre dividimos o valor da soma (menorValor + maiorValor) / 2 por dois, assim sempre iremos saber se estamos distantes ou próximos do valor desejado, para isso fazemos uso da estrutura condicional, veja abaixo.*/
#include <stdio.h>

//A função pesquisaBinaria tem como parâmetro um array, e dois números inteiros e em seguida, devolve um valor inteiro.
int pesquisaBinaria(int lista[], int item, int comprimento)
{
    //Declaramos baixo como sendo o menor valor possivel
   int baixo = 0;
   //Alto recebe o tamanho(comprimento) da lista
   int alto = comprimento;
   //Valores da metade e o valor do chute
   int meio, chute;

    //Faz a analise
   while(baixo <= alto)
   {
       /*Nesse caso, como o algoritmo de pesquisa sempre divide pela metade, temos que meio sera a soma do menor mais o maior valor e em seguida, dividimos por 2*/
       meio = (baixo + alto) / 2;
       //Chute recebe o valor encontrado no meio da lista
       chute = lista[meio];

        //Realiza as condições
       if (chute == item)
       {
           printf("Elemento encontrado no índice %d\n", meio);
           return meio;
       }

       else if(chute > item)
       {
           alto = meio - 1;
       }

       else
       {
           baixo = meio + 1;
       }

   }

   return -1; //Número não encontrado
   
}

int main(void)
{
    //Array de números
    int listaNumeros[] = {1, 3, 5, 7, 9, 12, 25, 50, 118, 256, 64, 32, 1085, 987};
    /*O operador sizeof recebe um array e em seguida, divide esse array pelo primeiro elemento do array*/
    int tamanho = sizeof(listaNumeros) / sizeof(listaNumeros[0]);

    //Retorna o número de operações realizadas
    //987 É O VALOR QUE QUEREMOS ENCONTAR NA ARRAY(SABER A SUA POSIÇÃO).
    printf("%d\n", pesquisaBinaria(listaNumeros, 987, tamanho)); // 1
    printf("%d\n", pesquisaBinaria(listaNumeros, -1, tamanho));
    return 0;
}