// Strings de forma aprofundada
#include <stdio.h>
#include <string.h> // Nos permite utilizar a função strlen()

int main(void)
{
    // Como pegar uma string como input?

    // Armazena a string(nesse caso, os caracteres digitados)
    char comidaFavorita[50];

    printf("Qual a sua comida favorita?: ");

    /* Note que o nosso %s tem um número 49 ali, isso indica que o máximo de caracteres digitados é 49, fazemos isso para evitar erros como o caso de digitar mais que 49 caracteres, isso iria ultrapassar o valor permitido. Temos que o último caractere é o |0 que é chamado de NULL, é semelhante com o \n. */
    scanf("%49s", comidaFavorita); // %49s nos protege caso o usuário digite mais que o permitido.
    printf("Sua comida favorita é: %s\n", comidaFavorita);

    // Como poderiamos ver o tamanho de uma string?

    // Bem, para isso devemos criar uma variável do tipo int que irá receber o tamanho da string
    int tamanhoString = 0; // Inicializamos a variável como 0, já que ela será um contador.

    // Utilizamos um loop para percorrer o tamanho da string

    /* Fazemos uso da nossa array e dentro da array, colocamos a nossa variável que irá calcular o tamanho da string. Em seguida utilizamos o operador 'diferente' para analisar a condição. Caso a nossa array atinga o caractere \0(NULL) nossa estrutura while para de executar. */
    while (comidaFavorita[tamanhoString] != '\0')
    {
        tamanhoString++; // Percorre todos os caracteres dentro da nossa array.
    }
    
    // Exibe o tamanho da nossa string
    printf("O tamanho da string %s é %d\n", comidaFavorita, tamanhoString);

    // Outra forma de ver o tamanho de uma string é utilizando uma função da biblioteca <string.h> chamada strlen() que já calcula o tamanho da string.
    printf("************************************************************\n");
    printf("Utilizando a função strlen para calcular o tamanho da string\n");
    printf("************************************************************\n");

    int tamanhoStr = strlen(comidaFavorita);
    printf("O tamanho da string %s é %d\n", comidaFavorita, tamanhoStr);

    return 0;
}