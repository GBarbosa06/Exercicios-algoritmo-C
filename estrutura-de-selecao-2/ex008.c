#include <stdio.h>

int main()
{
	int cpais, cprod;
	float peso, pesograma, preco, imposto;
	
	printf("Qual e o codigo do produto? ");
	scanf("%d", &cprod);

	printf("Qual e o peso (em quilos) do produto? ");
	scanf("%f", &peso);
	pesograma = peso*1000;

	
	printf("Qual e o codigo do pais de origem? ");
	scanf("%i", &cpais);

	if(cprod > 0 && cprod <= 4)
	{
		preco = pesograma*10;
		printf("O produto vale RS%.2f sem impostos\n", preco);
	}
	else
	{
		if(cprod >= 5 && cprod <= 7)
		{
			preco = pesograma*25;
			printf("O produto vale RS%.2f sem impostos\n", preco);
		}
		else
		{
			if(cprod >= 8 && cprod <=10)
			{
				preco = pesograma*35;
				printf("O produto vale RS%.2f sem impostos\n", preco);
			}
			else
			{
				printf("O codigo do produto esta incorreto");
			}
		}
	}
	switch(cpais)
	{
		case 1:
			printf("O pais de origem nao possui imposto");
			break;
		case 2:
			imposto = preco * 0.15;
			printf("O imposto e de 15 porcento, ficando RS%.2f", preco+imposto);
			break;
		case 3:
			imposto = preco * 0.25;
			printf("O imposto e de 25 porcento, ficando RS%.2f", preco+imposto);
			break;
		default:
			printf("O codigo do pais esta incorreto");
			break;
	}
}