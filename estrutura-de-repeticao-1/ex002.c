#include <stdio.h>

int main()
{
	int c = 0, cPar = 0, cImpar = 0;
	float n, soma = 0, somaPar = 0, media, mediaPar, maior = -3000, menor = 3000, porcentImpar = 0;

	do
	{
		c++;
		printf("(30000 para parar o programa)\nDigite um numero: ");
		scanf("%f", &n);
		soma += n;
		if(n > maior && n != 30000)
		{
			maior = n;
		}
		if(n < menor && n != 30000)
		{
			menor = n;
		}
		if((int)n%2==0 && n != 30000)
		{
			cPar++;
			somaPar += n;
			mediaPar = somaPar / cPar;
		}
		if((int)n%2 == 1)
		{
			cImpar++;
		}
	}while(n != 30000);
	soma -= 30000;
	c--;
	media = soma / c;
	porcentImpar = ((float)cImpar / (float)c) * 100;

	printf("\nA soma dos numeros digitados e %.2f", soma);
	printf("\nForam digitados %d numeros", c);
	printf("\nA media dos numeros digitados e %.2f", media);
	printf("\nO maior numero digitado foi %.2f", maior);
	printf("\nO menor numero digitado foi %.2f", menor);
	printf("\nA media dos numeros pares digitados e %.2f", mediaPar);
	printf("\nA porcentagem dos numeros impares e de %.2f porcento", porcentImpar);
	

}