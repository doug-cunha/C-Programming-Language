// Structs de forma mais complexa
#include <stdio.h>

// Primeiramente declaramos uma struct que irá receber as dimensões da casa 
typedef struct dimensoesCasa
{
    double comprimento;
    double largura;
    double altura;
} dimensoesCasa;

// Segundamente declaramos uma struct que irá receber o número da casa e a rua em que a casa está localizada
typedef struct localizacaoCasa
{
    int numeroCasa;
    char ruaCasa[30];
} localizacaoCasa;

/* Por fim, declaramos uma struct chamada minhaCasa que irá 'chamar' as outras duas structs dimensoesCasa e localizacaoCasa, declaramos o nome de ambas as structs duas vezes, assim, teremos acesso a essas duas structs. */
typedef struct minhaCasa
{
    char donoCasa[30];
    dimensoesCasa dimensoesCasa;
    localizacaoCasa localizacaoCasa;
} minhaCasa;

int main(void)
{
    // Exemplo utilizando somente a struct dimensoesCasa
    dimensoesCasa dimenCasa = {7, 30, 5};
    printf("Comprimento: %.2f metros\nLargura: %.2f metros\nAltura: %.2f metros\n\n", dimenCasa.comprimento, dimenCasa.largura, dimenCasa.altura);

    // Exemplo utilizando somente a struct localizacaoCasa
    localizacaoCasa localCasa = {10, "Rua Antônio Pina"};
    printf("Número: %d\nEndereço: %s\n\n", localCasa.numeroCasa, localCasa.ruaCasa);

    printf("Exemplo que utiliza uma única estrutura(struct) para fazer todo o trabalho!\n");

    // Exemplo que utiliza a struct minhaCasa, onde recebe as duas structs dimensoesCasa e localizacaoCasa

    /* Aqui já é um pouco mais complexo, note que dentro das chaves nós temos várias chaves, esses valores dentro dessas chaves são separados por virgula, cada chave dentro da chave primária irá passar os respectivos valores para as structs dimensoesCasa e localizacaoCasa, a string "Douglas" será passada para a struct minha casa. Após ter passado todos os valores, iremos imprimir eles na tela. Note que a saída onde referencia cada valor das structs é diferente. Para 'acessar' esses valores das structs nós utilizamos primeiramente a struct que contém todas as outras stucts, em seguida, utilizamos ponto para chamar cada uma das outras structs e em seguida, utilizamos ponto novamente para acessar as variáveis de cada uma das outras structs, e pronto, é simples assim! */
    minhaCasa myCasa = {"Douglas", {7, 30, 5}, {10, "Rua Antônio Pina"}};
    printf("\nDono: %s\nComprimento: %.2f metros\nLargura: %.2f\nAltura: %.2f\nNúmero: %d\nLocalização: %s\n", myCasa.donoCasa, myCasa.dimensoesCasa.comprimento, myCasa.dimensoesCasa.largura, myCasa.dimensoesCasa.altura, myCasa.localizacaoCasa.numeroCasa, myCasa.localizacaoCasa.ruaCasa );

    return 0;
}