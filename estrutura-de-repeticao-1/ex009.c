#include <stdio.h>

int main()
{
	int n, quadrado = 0;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			quadrado += i;
			printf("Quadrado = %d\n", quadrado);
		}
		else
		{
			n++;
		}
	}
    
	
}