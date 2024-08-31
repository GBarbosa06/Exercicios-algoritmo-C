#include <stdio.h>

int main()
{
	int i;
	float a, b, c, aux;

	printf("Digite 3 numeros reais: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Escolha uma das opcoes: \n 1 - Ordem crescente \n 2 - Ordem decrescente \n 3 - Maior no meio\n");
	scanf("%d", &i);
	
	switch (i)
	{
		case 1:
			if (b > c)
			{
				aux = b;
				b = c;
				c = aux;
			}
			if (a > b)
			{
				aux = a;
				a = b;
				b = aux;
			}
			if (b > c)
			{
				aux = b;
				b = c;
				c = aux;
			}
			printf("%.2f   %.2f   %.2f", a, b, c);
			break;
		case 2:
			if (b > c)
			{
				aux = b;
				b = c;
				c = aux;
			}
			if (a > b)
			{
				aux = a;
				a = b;
				b = aux;
			}
			if (b > c)
			{
				aux = b;
				b = c;
				c = aux;
			}
			printf("%.2f   %.2f   %.2f", c, b, a);
			break;
		case 3:
			if (a > b && a > c)
			{
				printf("%.2f   %.2f   %.2f", b, a, c);
			}
			else
			{
				if (b > a && b > c)
				{
					printf("%.2f   %.2f   %.2f", a, b, c);
				}
				else
				{
					printf("%.2f   %.2f   %.2f", a, c, b);
				}
			}
			break;
		default:
			printf("Escolha invalida");
			break;
		
			
	}
}