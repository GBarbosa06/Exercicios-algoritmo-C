#include <stdio.h>

int main()
{
	int i;
	float salario;

	printf("Escolha uma opcao: \n 1. Imposto \n 2. Novo salario \n 3. Classificacao \nDigite a opcao: ");
	scanf("%d", &i);

	switch(i)
	{
		case 1:
			printf("Digite o salario atual: ");
			scanf("%f", &salario);
			if(salario < 500)
			{
				printf("RS%.2f a pagar de impostos (5 porcento)", salario*0.05);
			}
			else
			{
				if(salario <= 850)
				{
					printf("RS%.2f a pagar de impostos (10 porcento)", salario*0.1);	
				}
				else
				{
					printf("RS%.2f a pagar de impostos (15 porcento)", salario*0.15);
				}
				
			}
			break;

		case 2:
			printf("Digite o salario atual: ");
			scanf("%f", &salario);
			if(salario < 450)
			{
				printf("Aumento de 100 reais. Novo salario = %.2f", salario+100);
			}
			else
			{
				if(salario < 750)
				{
					printf("Aumento de 75 reais. Novo salario = %.2f", salario+75);	
				}
				else
				{
					if(salario < 1500)
					{
						printf("Aumento de 50 reais. Novo salario = %.2f", salario+50);	
					}
					else
					{
						printf("Aumento de 25 reais. Novo salario = %.2f", salario+25);
					}
				}
			}
			break;
		
		case 3:
			printf("Digite o salario atual: ");
			scanf("%f", &salario);
			if(salario > 700)
			{
				printf("E um funcionario bem remunerado, parabens");
			}
			else
			{
				printf("E um funcionario mal remunerado");
			}
			break;
	}
}