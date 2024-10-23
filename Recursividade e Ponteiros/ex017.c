#include <stdio.h>

void calcularDobroMetade(float *num, float *dobro, float *metade);

int main()
{
    float n, dobro, metade;
    float *ptr = &n, *ptrDobro = &dobro, *ptrMetade = &metade;
    printf("Digite um numero real: ");
    scanf("%f", &n);
    calcularDobroMetade(ptr, ptrDobro, ptrMetade);
    printf("Entrada: %.2f \nDobro: %.2f \nMetade: %.2f", n, dobro, metade);
}

void calcularDobroMetade(float *num, float *dobro, float *metade)
{
    *dobro = *num * 2;
    *metade = *num / 2;
}