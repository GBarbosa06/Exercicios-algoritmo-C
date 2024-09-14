#include <stdio.h>

int main()
{
	int esc, n, m, c, d, u, aux;

	printf("Escolha uma opcao: \n 1. criptografar \n 2. descriptografar\n   ");
	scanf("%d", &esc);

	switch(esc)
	{
		case 1:
			printf("Digite um numero de 4 digitos: ");
			scanf("%d", &n);
			u = n%10;
			d = ((n%100)-u)/10;
			c = ((n%1000)- d - u)/100;
			m = ((n%10000)- c -d - u)/1000; //separando cada numero

			u += 7;
			d += 7;
			c += 7;
			m += 7;
			

			m = m%10;
			c = c%10;
			d = d%10;
			u = u%10;

			aux = d;
			d = m;
			m = aux;

			aux = u;
			u = c;
			c = aux; 
			printf("\n%d%d%d%d", m, c, d, u);
			
			break;
		case 2:
			printf("Digite o numero criptografado: ");
			scanf("%d", &n);

			u = n%10;
			d = ((n%100)-u)/10;
			c = ((n%1000)- d - u)/100;
			m = ((n%10000)- c -d - u)/1000;

			m += 10;
			c += 10;
			d += 10;
			u += 10;

			
			m -= 7;
			c -= 7;
			d -= 7;
			u -= 7;

			aux = d;
			d = m;
			m = aux;

			aux = u;
			u = c;
			c = aux; 

			printf("\n%d - %d - %d - %d", m, c, d, u);
			break;
		default:
			printf("Escolha invalida");
			break;
	}

	
}