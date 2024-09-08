#include <stdio.h>

int main()
{
	float sInicial = 1000, percentual = 0.015, aumento = sInicial * percentual, sNovo;
	int ano = 2005, anoAtual;
	
	printf("Qual o ano atual? ");
	scanf("%d", &anoAtual);
	
	sNovo = sInicial + aumento;
	ano++;

	while(ano < anoAtual)
	{
		percentual *= 2;
		aumento = sNovo * percentual;
		sNovo += aumento;
		ano++;
	}

	printf("O salario de %d e de RS%.2f", ano, sNovo);

	
}