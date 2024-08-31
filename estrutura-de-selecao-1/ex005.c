#include <stdio.h>
#include <math.h>

int main()
{
	float n, quad, cubo, raiz2, raiz3;

	printf("Digite um numero positivo e maior que 0: ");
	scanf("%f", &n);

	quad = n * n;
	cubo = n * n * n;
	raiz2 = sqrt(n);
	raiz3 = cbrt(n);
	printf("%.2f ao quadrado = %.2f \n", n, quad);
	printf("%.2f ao cubo = %.2f \n", n, cubo);
	printf("Raiz quadrada de %.2f = %.2f \n", n, raiz2);
	printf("Raiz cubica de %.2f = %.2f", n, raiz3);
}