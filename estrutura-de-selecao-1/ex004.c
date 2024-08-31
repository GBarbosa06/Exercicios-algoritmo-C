#include <stdio.h>
#include <math.h>

int main()
{
	int escolha, tempo;
	float deposito, juros, rendimento;

	printf("Calculadora de juros\n");
	printf("1. juros simples \n2.juros compostos\n");
	scanf("%d", &escolha);
	
	if (escolha == 1){
		printf("Digite o valor do deposito em reais: ");
		scanf("%f", &deposito);

		printf("Qual eh a taxa de juros (porcentagem)? ");
		scanf("%f", &juros);

		printf("Por quanto tempo (em meses)? ");
		scanf("%d", &tempo);

		rendimento = deposito * (juros/100) * tempo;
		
		printf("O valor do rendimento em %d meses eh de %.2f reais, e o valor do montante eh RS%.2f", tempo, rendimento, deposito+rendimento);
		
		
		
	}
	else{
		if (escolha == 2){
			printf("Digite o valor do deposito em reais: ");
			scanf("%f", &deposito);

			printf("Qual eh a taxa de juros (porcentagem)? ");
			scanf("%f", &juros);
	
			printf("Por quanto tempo (em meses)? ");
			scanf("%d", &tempo);
			rendimento = deposito * pow((1+(juros/100)),tempo);
			printf("O valor do montante em %d meses eh de %.2f reais", tempo, rendimento);
		
		}
		else{
			printf("Escolha uma das opcoes acima");

		}
			
	}
	return 0;

}