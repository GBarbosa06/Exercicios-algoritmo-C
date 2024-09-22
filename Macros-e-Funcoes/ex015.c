#include <stdio.h>

#define ABS(n) (n < 0 ? -n:n)

int main() 
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("O valor absoluto de %d e %d", n, ABS(n));
}