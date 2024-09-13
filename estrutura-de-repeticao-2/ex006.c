#include <stdio.h>
#include <math.h>

int main()
{
    float n; 
    int k;

    printf("Digite um numero: ");
    scanf("%f", &n);

    for(int i = 1; i <= 12; i++)
    {
        k = i;
        k = (k + (n/k))/2;

        if(k == sqrt(n))
        {
            printf("%d, raiz correta\n", k);
        }
        else
        {
            if(k == sqrt(n) + 1 || k == sqrt(n) - 1)
            {
                printf("%d, valor aproximado da raiz, diferenca de 1 numero\n", k);
            }
            else
            {
                printf("%d, valor a mais de 1 numero de distancia da raiz\n", k);
            }
        }
    }
}