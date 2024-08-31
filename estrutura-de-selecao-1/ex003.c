#include <stdio.h>

int main()
{
	float satual, snovo, aumento, percentual;
	printf("Digite seu salario atual: ");
	scanf("%f", &satual);

	printf("De quanto foi o seu aumento (porcentagem): ");
	scanf("%f", &percentual);
	
	aumento = satual * (percentual/100);
	snovo = satual + aumento;
	printf("Apos o seu aumento de %.2f reais, seu salario eh de RS%.2f", aumento, snovo);

}