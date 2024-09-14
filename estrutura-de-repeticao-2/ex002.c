#include <stdio.h>
#include <math.h>

int main()
{
	float n, soma = 0, media, desvio[100], variancia, dp;
	int qtd, vetor[100];

	printf("Quatos numeros entrarao no calculo? ");
	scanf("%d", &qtd);

	for(int i = 1; i <= qtd; i++) //pegar numeros e media
	{
		printf("Digite o numero %d: ", i);
		scanf("%f", &n);
		soma += n;
		vetor[i] = n;
	}
	media = soma / qtd;
	for(int i = 1; i <= qtd; i++) //calculo do desvio
	{
		desvio[i] = vetor[i] - media;
	}
	
	for(int i = 1; i <= qtd; i++)//variancia
	{
		variancia += pow(desvio[i], 2);

	}
	variancia /= qtd;
	dp = sqrt(variancia);

	printf("Desvio padrao = %.2f\n", dp);
	

}