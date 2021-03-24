#include <stdio.h>
#include <math.h>

// Função main inicializa o programa
int main(void)
{
    // Irá armazenar os dados fonercidos pelo usuário e os cálculos realizados.
    double a, b, c, delta, raiz, r1, r2;

    // Solicita dados ao usuário
    printf("Digite os valores respectivos de a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // Calcula delta
    delta = pow(b, 2) - 4 * (a * c);
    raiz = sqrt(delta);

    // Calcula o x1 e o x2, que são as raízes da equação
    r1 = (-b + raiz) / (2 * a);
    r2 = (-b - raiz) / (2 * a);

    // Realiza o teste de validez no delta e exibe os resultados das raízes
    if (delta > 0)
    {
        printf("As raízes são: %.2f %.2f\n", r1, r2);
    }

    else if(delta == 0)
    {
        printf("As raízes são iguais, delta = 0: %.2f %.2f\n", r1, r2);
    }

    else
    {
        printf("Delta negativo, não há solução no conjunto dos números reais!\n");
    }
    
    return 0; // Indica que o programa foi concluido com sucesso
} // Fim da função main