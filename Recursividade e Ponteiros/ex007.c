#include <stdio.h>

int par(int n);

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("%d", par(n));
}

int par(int n)
{
    if (n==2)
        return 1;
    else if (n==1)
        return 0;
    else
        return par(n-2);
}