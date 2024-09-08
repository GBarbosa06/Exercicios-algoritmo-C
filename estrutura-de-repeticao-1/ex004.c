#include <stdio.h>
int main()
{
	int lado;
	
	printf("Digite o tamanho do lado do quadrado: ");
	scanf("%d", &lado);

	if(lado == 1)
	{
		printf(" *");
	}
	else
	{
		for(int i = 1; i <= lado; i++)
		{
			printf(" *");
		}
		for(int i = 1; i < (lado - 1); i++)
		{
			printf("\n *");
			for(int meio = 1; meio < (lado - 1); meio++)
			{
				printf("  ");
			}
			printf(" *");
		}
		printf("\n");
		for(int i = 1; i <= lado; i++)
		{
			printf(" *");
		}
	}
}