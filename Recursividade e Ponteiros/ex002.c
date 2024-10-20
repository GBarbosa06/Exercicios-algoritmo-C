#include <stdio.h>

void regr(int n);
void bin(int n);


int main()
{
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    printf("Contagem regressiva: \n");
    regr(n);
    printf("Seu numero em binario eh: ");
    bin(n);
    
}

void regr(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        regr(n-1);
    }    
}

void bin(int n) 
{
    if (n > 0) {
        bin(n / 2);
        printf("%d", n % 2);
    }
}