#include <stdio.h>

int main()
{
	float e = 1, fat;
	int n;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i++) //faz o somatorio de 1/fatorial...
	{
		fat = i;

		for(int c = i; c > 1; c--) //calcula o fatorial
		{
			fat *= (c-1);
		}

		e = e + (1/fat);
	}


	printf("%f", e);
}