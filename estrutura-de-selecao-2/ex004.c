#include <stdio.h>

int main()
{
	int h1, min1, h2, min2, hduracao, minduracao;

	printf("Digite a hora em que o jogo comecou (hh:mm): ");
	scanf("%d:%d", &h1, &min1);
	
	printf("Digite a hora em que o jogo terminou (hh:mm): ");
	scanf("%d:%d", &h2, &min2);	

	if(h2 > h1) //se o jogo terminou no mesmo dia
	{
		hduracao = h2 - h1;
		minduracao = min2 - min1;

		if(min2 >= min1)
		{
			minduracao = min2 - min1;
			printf("O jogo durou %d horas e %d minutos", hduracao, minduracao);
		}
		else
		{
			hduracao = hduracao - 1;
			minduracao = 60 + minduracao;
			printf("O jogo durou %d horas e %d minutos", hduracao, minduracao);
		}
	}
	else //se o jogo terminou no dia seguinte
	{
		hduracao = (24 - h1) + h2;
		minduracao = min2 - min1;
		if(min2 >= min1)
		{
			minduracao = min2 - min1;
			printf("O jogo durou %d horas e %d minutos", hduracao, minduracao);
		}
		else
		{
			hduracao = hduracao - 1;
			minduracao = 60 + minduracao;
			printf("O jogo durou %d horas e %d minutos", hduracao, minduracao);
		}
	}
}