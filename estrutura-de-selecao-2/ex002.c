#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float num;

	printf("Digite um numero: ");
	scanf("%f", &num);

	printf("Escolha uma operacao para seu numero: \n 1. Ao quadrado \n 2. Ao cubo \n 3. Raiz quadrada \n 4. Raiz cubica \n");
	scanf("%d", &i);
	
	switch (i)
	{
		case 1:
			printf("%.2f", num * num);
			break;
		case 2:
			printf("%.2f", pow(num, 3));
			break;
		case 3:
			printf("%.2f", sqrt(num));
			break;
		case 4:
			printf("%.2f", cbrt(num));
			break;
		default:
			printf("Escolha invalida");
			break;
	}

}