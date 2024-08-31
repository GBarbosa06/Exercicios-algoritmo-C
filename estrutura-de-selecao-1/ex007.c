#include <stdio.h>

int main()
{
	int n, u, d, c, m, mi;
	printf("Digite um numero de 5 digitos: ");
	scanf("%d", &n);

	u = n % 10;
	d = ((n % 100) - u)/10;
	c = ((n % 1000) - (d + u))/100;
	m = ((n % 10000) - (c + d + u))/1000;
	mi = ((n % 100000) - (m + c + d + u))/10000;
	

	printf("%d   %d   %d   %d   %d", mi, m, c, d, u);
}