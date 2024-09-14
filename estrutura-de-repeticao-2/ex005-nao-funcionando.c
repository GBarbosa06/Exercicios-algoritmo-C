#include <stdio.h>
#include <math.h>

int main()
{
	float cos, fat, menos = 0, mais = 0;
	int n, range = 20;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for(int i = 2; i <= range; i+=4)
	{
		fat = i;

		for(int c = i; c > 1; c--)
		{
			fat *= (c-1);
		}

		menos = menos - (pow(n, i)/fat);
	}
    for(int i = 4; i <= range; i+=4)
	{
		fat = i;

		for(int c = i; c > 1; c--)
		{
			fat *= (c-1);
		}

		mais = mais - (pow(n, i)/fat);
	}
    cos = 1 + menos + mais;



	printf("%f", cos);
}