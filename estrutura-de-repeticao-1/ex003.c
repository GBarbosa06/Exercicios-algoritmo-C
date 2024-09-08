#include <stdio.h>

int main()
{
	int fat, n;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d", &n);
	fat = n;
	if(n == 0) //fatorial de 0 = 1
	{
		fat = 1;
	}
	else
	{
		while(n > 1)
		{
			fat = fat * (n-1);
			n--;
		}
	}	
	printf("%d", fat);

}