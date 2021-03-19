// Structs em C
#include <stdio.h>

// Lembrando que variável retangulo após o typedef é opcional.
typedef struct retangulo
{
    int comprimento;
    int altura;
} retangulo;


int main(void)
{
    retangulo meuRetangulo = {5, 20};

    printf("Comprimento: %d\nAltura: %d\n", meuRetangulo.comprimento, meuRetangulo.altura);

    return 0;
}