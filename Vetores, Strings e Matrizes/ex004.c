#include <stdio.h>

void minimax(int v[], int n, int *a, int *b);

int main()
{
    int n, a, b;
    int *ptr1 = &a, *ptr2 = &b;
    printf("Quantos numeros serao digitados? ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
    minimax(v, n, ptr1, ptr2);
    printf("Menor: %d\nMaior: %d", a, b);
    
}

void minimax(int v[], int n, int *a, int *b)
{
    int maior = v[0], menor = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i]>maior)
        {
            maior = v[i];
        }
        else if (v[i]<menor)
        {
            menor = v[i];
        }
    }
    
    *a = menor;
    *b = maior;
    
}