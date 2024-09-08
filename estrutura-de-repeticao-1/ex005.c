#include <stdio.h>

int main()
{
	int c, n, menor = 90000;
	printf("Quantos numeros serao digitados? ");
	scanf("%d", &c);

	for(int i = 1; i <= c; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n < menor)
		{
			menor = n;
		}
	}
	printf("O menor numero digitado foi %d", menor);;
}