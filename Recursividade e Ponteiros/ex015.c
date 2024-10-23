#include <stdio.h>

void compararNumeros(int a, int b, int *maior, int *menor);

int main()
{
    int n1, n2, maior=0, menor=0, *ptr1, *ptr2;
    ptr1 = &maior;
    ptr2 = &menor;

    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    compararNumeros(n1, n2, ptr1, ptr2);
    printf("Maior: %d\nMenor: %d", maior, menor);
}

void compararNumeros(int a, int b, int *maior, int *menor)
{
    if (a>b)
    {
        *maior = a;
        *menor = b;
    }
    else if (a==b)
    {
        printf("VALORES IGUAIS\n");
        *maior = a;
        *menor = *maior;
    }
    else
    {
        *maior = b;
        *menor = a;
    }
    
}