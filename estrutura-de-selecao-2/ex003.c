#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float n1, n2;
	int n3, n4, resto; //para usar no resto

	

	printf("Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);

	n3 = n1;
	n4 = n2;
	resto = n3%n4;

	printf("Escolha uma operacao para seu numero: \n 1. Soma \n 2. Subtracao \n 3. Multiplicacao \n 4. Divisao \n 5. Elevado ao segundo numero \n 6. Raiz com o segundo numero de indice \n 7. Resto \n");
	scanf("%d", &i);
	
	switch (i)
	{
		case 1:
			printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
			break;
		case 2:
			printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
			break;
		case 3:
			printf("%.2f x %.2f = %.2f", n1, n2, n1*n2);
			break;
		case 4:
			printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
			break;
		case 5:
			printf("%.2f elevado a %.2f = %.2f", n1, n2, pow(n1, n2));
			break;
		case 6:
			printf("Raiz de %.2f no indice %.2f = %.2f", n1, n2, pow(n1, (1/n2)));
			break;
		case 7:
			printf("Resto da de %d por %d = %d", n3, n4, resto);
			break;
		default:
			printf("Escolha invalida");
			break;
	}
}