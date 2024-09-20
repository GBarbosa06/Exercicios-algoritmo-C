#include <stdio.h>
int main()
{

    int n, n1 = 0, n2 = 1, n3 = n1 + n2;

    printf("Digite a posicao do termo: ");
    scanf("%d", &n);

    for(int i = 3; i <= n; i++)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;


    }
    printf("O %d numero da sequencia de fibonacci = %d", n ,n3);
}