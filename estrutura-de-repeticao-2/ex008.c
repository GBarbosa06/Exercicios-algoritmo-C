#include <stdio.h>

int main()
{
    int n = 0, contador = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            contador++;
        }
    }
    printf(contador==2 ? "E um numero primo" : "Nao e um numero primo");
}