#include <stdio.h>
int main()
{

    int n, n1 = 0, n2 = 1, n3 = n1 + n2;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n3 <= n)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    n3 = n3 - n1;

    if (n3 == n)
    {
        printf("O numero digitado pertence a Sequencia de Fibonacci");
    }
    else
    {
        printf("O numero digitado nao pertence a Sequencia de Fibonacci");
    }

    return 0;
}