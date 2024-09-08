#include <stdio.h>

int main()
{
	int i;
	printf("Calculadora de produtos dos impares");
	
	for(i = 1; i <=15; i++)
	{
		printf("\nTabuada do %d\n", i);

		for (int c = 1; c <= 15; c++)
		{
			printf("%d x %d = %d\n", i, c, i*c);
			c++;
		}
		i++;
	}
}