#include <stdio.h>

int menu(int escolha)
{
    printf("\nEscolha alguma das operações abaixo");
    
    printf("\n********** Lista de operações **********\n");
    printf("Adição: 1\n");
    printf("Subtração: 2\n");
    printf("Multiplicação: 3\n");
    printf("Divisão: 4\n");
    printf("Módulo: 5\n");
    printf("Finalizar programa: 0\n");

    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

int main(void)
{
    
    double adicao, subtracao, multiplicacao, divisao, modulo;
    double numUm, numDois;
    int choice, acessarMenu, continuar;

    acessarMenu = menu(choice);
    
    while (acessarMenu != 0)
    {
        if (acessarMenu == 1)
        {
            printf("Digite dois números: ");
            scanf("%lf%lf", &numUm, &numDois);

            adicao = numUm + numDois;
            printf("A soma de %.2f mais %.2f é %.2f\n", numUm, numDois, adicao);

            printf("Deseja continuar? 1 = Sim, 2 = Não: ");
            scanf("%d", &continuar);
            if (continuar == 1)
            {
                
            }

            else
            {
                acessarMenu = menu(choice);
            }
            
        }

        else if(acessarMenu == 2)
        {
            printf("Digite dois números: ");
            scanf("%lf%lf", &numUm, &numDois);

            subtracao = numUm - numDois;
            printf("A subtração de %.2f menos %.2f é %.2f\n", numUm, numDois, subtracao);

            printf("Deseja continuar? 1 = Sim, 2 = Não: ");
            scanf("%d", &continuar);
            if (continuar == 1)
            {
                
            }

            else
            {
                acessarMenu = menu(choice);
            }
        }

        else if (acessarMenu == 3)
        {
            printf("Digite dois números: ");
            scanf("%lf%lf", &numUm, &numDois);

            multiplicacao = numUm * numDois;
            printf("A multiplicação de %.2f vezes %.2f é %.2f\n", numUm, numDois, multiplicacao);

            printf("Deseja continuar? 1 = Sim, 2 = Não: ");
            scanf("%d", &continuar);
            if (continuar == 1)
            {
                
            }

            else
            {
                acessarMenu = menu(choice);
            }
        }

        else if(acessarMenu == 4)
        {
            printf("Digite dois números: ");
            scanf("%lf%lf", &numUm, &numDois);
            if (numDois == 0)
            {
                printf("\nImpossível dividir por zero!\n");

                printf("\nDeseja continuar? 1 = Sim, 2 = Não: ");
                scanf("%d", &continuar);
                if (continuar == 1)
                {
                    
                }

                else
                {
                    acessarMenu = menu(choice);
                }
            }
            else
            {
                divisao = numUm / numDois;
                printf("A divisão de %.2f por %.2f é %.2f\n", numUm, numDois, divisao);

                printf("Deseja continuar? 1 = Sim, 2 = Não: ");
                scanf("%d", &continuar);
                if (continuar == 1)
                {
                    
                }

                else
                {
                    acessarMenu = menu(choice);
                }
            }
            
        }

        else if (acessarMenu == 5)
        {
            printf("Digite dois números: ");
            scanf("%lf%lf", &numUm, &numDois);

            // Módulo é dado por dois números inteiros.
            modulo = (int) numUm % (int) numDois;
            printf("O módulo de %.2f e %.2f é %.2f\n", numUm, numDois, modulo);

            printf("Deseja continuar? 1 = Sim, 2 = Não: ");
            scanf("%d", &continuar);
            if (continuar == 1)
            {
                
            }

            else
            {
                acessarMenu = menu(choice);
            }
        }
        

        else
        {
            printf("\nOpção não encontrada, por favor digite novamente!\n");
            acessarMenu = menu(choice);
        }
        
        
    }
    

    return 0;
}