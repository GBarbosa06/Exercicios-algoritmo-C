#include <stdio.h>

int main()
{
	int cestado, ccarga;
	float preco_quilo, peso, pesokg, preco_final, imposto;

	printf("Digite o codigo do estado de origem da carga: ");
	scanf("%d", &cestado);

	printf("Digite o codigo da carga: ");
	scanf("%d", &ccarga);

	printf("Digite o peso da carga(toneladas): ");
	scanf("%f", &peso);
	pesokg = peso * 1000;
	
	if(ccarga >= 10 && ccarga <= 20)
	{
		preco_quilo = 100;
	}
	else
	{
		if(ccarga > 20 && ccarga <= 30)
		{
			preco_quilo = 250;
		}
		else
		{
			if(ccarga > 30 && ccarga <= 40)
			{
				preco_quilo = 340;
			}
			else
			{
				printf("Digite um codigo de carga valido");
				return 0;
				
			}
		}
	}

	preco_final = pesokg * preco_quilo;

	switch(cestado)
	{
		case 1:
			imposto = preco_final * 0.35;
			printf("A carga de %.2fkg vale RS%.2f, no estado do seu codigo tem 35 porcento de imposto, ficando RS%.2f", pesokg, preco_final, preco_final+imposto);
			break;
		case 2:
			imposto = preco_final * 0.25;
			printf("A carga de %.2fkg vale RS%.2f, no estado do seu codigo tem 25 porcento de imposto, ficando RS%.2f", pesokg, preco_final, preco_final+imposto);
			break;
		case 3:
			imposto = preco_final * 0.15;
			printf("A carga de %.2fkg vale RS%.2f, no estado do seu codigo tem 15 porcento de imposto, ficando RS%.2f", pesokg, preco_final, preco_final+imposto);
			break;
		case 4:
			imposto = preco_final * 0.05;
			printf("A carga de %.2fkg vale RS%.2f, no estado do seu codigo tem 5 porcento de imposto, ficando RS%.2f", pesokg, preco_final, preco_final+imposto);
			break;
		case 5:
			printf("A carga de %.2fkg vale RS%.2f, no estado o imposto eh isento", pesokg, preco_final);
			break;
		default:
			printf("Codigo de estado invalido");
			break;
	}
}