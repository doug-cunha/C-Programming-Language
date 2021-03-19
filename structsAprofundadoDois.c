// Exemplo de struct complexa onde irá receber valores digitados pelo usuário
// Nota, estamos com problema ao passar o nome e o endereço da rua, resolver mais tarde!
#include <stdio.h>


typedef struct dimensoesCasa
{
    double comprimento;
    double largura;
    double altura;
} dimensoesCasa;

typedef struct localizacaoCasa
{
    int numeroCasa;
    char ruaCasa[30];
} localizacaoCasa;

typedef struct minhaCasa
{
    char donoCasa[30];
    dimensoesCasa dimensoesCasa;
    localizacaoCasa localizacaoCasa;
} minhaCasa;

int main(void)
{
    minhaCasa myCasa;

    printf("Digite o seu nome: ");
    scanf("%s", myCasa.donoCasa);
    

    printf("Digite as dimensões da casa, comprimento, largura e altura respectivamente em metros: ");
    scanf("%lf%lf%lf", &myCasa.dimensoesCasa.comprimento, &myCasa.dimensoesCasa.largura, &myCasa.dimensoesCasa.altura);

    printf("Digite o número da casa: ");
    scanf("%d", &myCasa.localizacaoCasa.numeroCasa);

    printf("Digite em qual rua a sua casa está localizada: ");
    scanf("%s", myCasa.localizacaoCasa.ruaCasa);

    
    printf("\n");

    printf("A casa está no nome do senhor(a): %s\n", myCasa.donoCasa);
    printf("As dimensões da casa são respectivamente %.2f metros, %.2f metros, %.2f metros\n", myCasa.dimensoesCasa.comprimento, myCasa.dimensoesCasa.largura, myCasa.dimensoesCasa.altura);
    printf("O número da casa é: %d e a localização é %s\n", myCasa.localizacaoCasa.numeroCasa, myCasa.localizacaoCasa.ruaCasa);

    return 0;
}