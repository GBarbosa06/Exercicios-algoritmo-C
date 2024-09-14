#include <stdio.h>
int main()
{

    int n, n1 = 0, n2 = 1, n3 = n1 + n2;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 3; i <= n; i++)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;


    }
    printf("O numero %d da sequencia de fibonacci = %d", n ,n3);
}