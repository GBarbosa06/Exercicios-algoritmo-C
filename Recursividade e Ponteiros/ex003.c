#include <stdio.h>

int mdc(int n1, int n2, int divisor);

int main()
{
    int n1, n2;
    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("O Maximo Divisor Comum eh %d", mdc(n1, n2, n2));
}

int mdc(int n1, int n2, int divisor)
{
    if (n1%divisor==0 && n2%divisor==0)
    {
        return divisor;
    }
    else
    {
        return mdc(n1, n2, divisor-1);
    }
    
}