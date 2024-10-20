#include <stdio.h>

int contador(int n);

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Seu numero possui %d digitos", contador(n));
}

int contador(int n)
{
    if (n/10==0)
    {
        return 1;
    }
    else
    {
        return 1+contador(n/10);
    }
    
}