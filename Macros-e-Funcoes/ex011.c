#include <stdio.h>

#define QUAD(n) n*n


int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("Quadrado %.2f = %.2f", n, QUAD(n));
}