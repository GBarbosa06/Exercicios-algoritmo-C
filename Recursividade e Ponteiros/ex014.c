#include <stdio.h>

void contarDivisores(int num, int *totalDivisores);

int main()
{
    int n, divisores = 0;
    int *ptr = &divisores;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    contarDivisores(n, ptr);
    printf("Seu numero tem %d divisores", divisores);
}

void contarDivisores(int num, int *totalDivisores)
{
    for (int i = 1; i <= num; i++)
    {
        if(num%i==0)
        {
            (*totalDivisores)++;
        }
    }
    
}