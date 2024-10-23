#include <stdio.h>

void dividir(int *dividendo, int *divisor, int *quociente, int *resto);

int main()
{
    int dividendo, divisor, quociente, resto;
    int *ptr = &dividendo, *ptrDivisor = &divisor, *ptrQuociente = &quociente, *ptrResto = &resto;
    printf("Digite dois numeros inteiro: ");
    scanf("%d %d", &dividendo, &divisor);
    dividir(ptr, ptrDivisor, ptrQuociente, ptrResto);
    printf("Entrada: %d \nQuociente: %d \nResto: %d", dividendo, quociente, resto);
}

void dividir(int *dividendo, int *divisor, int *quociente, int *resto)
{
    *quociente = *dividendo / *divisor;
    *resto = *dividendo % *divisor;
}