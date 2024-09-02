#include <stdio.h>

int main()
{
	float peso, altura;
	printf("Digite seu peso(kg): ");
	scanf("%f", &peso);
	printf("Digite sua altura(cm):");
	scanf("%f", &altura);

	if(altura < 120)
	{
		if(peso < 60)
		{
			printf("A sua classificacao e 'A'");
		}
		else
		{
			if(peso <= 90)
			{
				printf("A sua classificacao e 'D'");
			}
			else
			{
				printf("A sua classificacao e 'G'");
			}
		}
	}
	else
	{
		if(altura < 170)
		{
			
			if(peso < 60)
			{
				printf("A sua classificacao e 'B'");
			}
			else
			{
			if(peso <= 90)
				{
					printf("A sua classificacao e 'E'");
				}
				else
				{
					printf("A sua classificacao e 'H'");
				}
			}
			
		}
		else
		{
			if(peso < 60)
				{
					printf("A sua classificacao e 'C'");
			}
			else
			{
				if(peso <= 90)
				{
					printf("A sua classificacao e 'F'");
				}
				else
				{
					printf("A sua classificacao e 'I'");
				}
			}
		}
	}
}