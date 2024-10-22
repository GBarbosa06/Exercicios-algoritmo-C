#include <stdio.h>

void trocarCiclicamente(int *a, int *b, int *c);

int main()
{
    int n1, n2, n3;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int *a = &n1, *b = &n2, *c = &n3;
    trocarCiclicamente(a, b, c);
    printf("%d %d %d", *a, *b, *c);
}

void trocarCiclicamente(int *a, int *b, int *c)
{
    int aux = *b;
    *b = *a;
    *a = *c;
    *c = aux;

}