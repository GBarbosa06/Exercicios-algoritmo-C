#include <stdio.h>

int main()
{
	int i;
	float satual, snovo;

	printf("Digite o salario atual: ");
	scanf("%f", &satual);

	printf("Qual o cargo? \n 1. Escriturario \n 2. Secretario \n 3. Caixa \n 4. Gerente \n 5.Diretor\n");
	scanf("%d", &i);

	switch (i)
	{
		case 1:
			snovo = satual + (satual * 0.5);
			printf("O salario aumentou 50 porcento, o novo salario e de %.2f", snovo);
			break;
		case 2:
			snovo = satual + (satual * 0.35);
			printf("O salario aumentou 35 porcento, o novo salario e de %.2f", snovo);
			break;
		case 3:
			snovo = satual + (satual * 0.2);
			printf("O salario aumentou 20 porcento, o novo salario e de %.2f", snovo);
			break;
		case 4:
			snovo = satual + (satual * 0.1);
			printf("O salario aumentou 10 porcento, o novo salario e de %.2f", snovo);
			break;
		case 5:
			printf("O salario nao teve mudanca, se mantem em %.2f", satual);
			break;
		default:
			printf("Opcao invalida");
			break;
	}
}