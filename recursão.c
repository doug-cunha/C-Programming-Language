#include <stdio.h>

//Função long que têm como parâmetro a variável num
long fatorial(long num)
{
    //Caso num seja menor ou igual 1, retorna 1
    if(num <= 1)
    {
        return 1;
    }

    /*Senão, retorna a multiplicação de num pela chamada da função fatorial, ou seja, isso é nada mais nada menos que a recursividade, uma função que chama a sí própria n vezes. */
    else
    {
        return (num * fatorial( num - 1));
    } //Fim da função fatorial
}

int main(void)
{   
    //Armazena e solicita um número do tipo long ao usuário
    long numero;
    printf("Digite um número de 0 a 5: ");
    scanf("%ld", &numero);

    //Mostra o resultado do fatorial e faz a chamada da função fatorial
    printf("O fatorial de %ld é %ld\n", numero, fatorial(numero));

    return 0; //Indica que o programa foi concluido com sucesso
} //Fim da função main