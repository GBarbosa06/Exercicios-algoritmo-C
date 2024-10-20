#include <stdio.h>

int somaDigitos(int n);

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("A soma dos digitos = %d", somaDigitos(n));
}

int somaDigitos(int n)
{
    if (n%10==0)
    {
        return 0;
    }
    else
    {
        return (n%10 + somaDigitos(n/10));
    }
}