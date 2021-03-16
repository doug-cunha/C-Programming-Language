// Exemplo de if else aninhados e uso da função getchar para resolvermos o problema de utilizar muitos scanf.

#include <stdio.h>

int main(void)
{
	// Menu de opções
	printf("Escolha uma opção do menu 1 - 4:\n");
	printf("1. adiciona um paciente\n");
	printf("2. Visualiza um paciente\n");
	printf("3. Procura uma paciente\n");
	printf("4. saída\n");

	// Armazena a opção do usuário
	int input;
	scanf("%d", &input);

	// Realiza os testes de condição
	if(input == 1)
{
	printf("Adicionando um paciente\n");
}

	else if(input == 2)
{
	printf("Visualizando um paciente\n");
}

	else if(input == 3)
{
	printf("Procurando um paciente\n");
}

	else if(input == 4)
{
	printf("Saíndo...\n");

	// Pergunta se o usuário que salvar as alterações
	printf("Você deseja salvar? Y/N ");
	// Armazena a resposta do usuário
	char saida;
	
	// Função getchar previne o erro de new line
	getchar();
	// Lê a resposta do usuário
	scanf("%c", &saida);
	
	// Sequência de if-else aninhados onde testam as condições
	if(saida == 'Y' || saida == 'y')
{
	printf("Salvando mudanças!\n");
}

	else if(saida == 'N' || saida == 'n')
{
	printf("Mudanças não salvas!\n");
}

	else
{
	printf("Resposta incorreta, digite novamente!\n");
} // Fim do if-else aninhados

}

	else
{
	printf("Entrada incorreta!\n");
}

	return 0;
}
