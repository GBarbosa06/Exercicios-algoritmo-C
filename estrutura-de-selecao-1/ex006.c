#include <stdio.h>

int main()
{
	float peso, qtd, sobra;
	
	printf("Qual o peso do saco de racao comprado (em kg)? ");
	scanf("%f", &peso);
	printf("Qual a quantidade de racao que cada gato come por dia (em gramas)? ");
	scanf("%f", &qtd);
	
	sobra = peso - ((qtd /1000) * 5);
	printf("Apos 5 dias, restara %.2f quilos de racao", sobra);
}