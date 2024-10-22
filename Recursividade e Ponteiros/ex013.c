#include <stdio.h>

void incrementarDecrementar(int *valor, int *incrementado, int *decrementado);

int main()
{
    int valor = 5;
    int incrementado = valor, decrementado = valor;
    int *ptr = &valor, *ptrIncremento = &incrementado, *ptrDecremento = &decrementado;

    incrementarDecrementar(ptr, ptrIncremento, ptrDecremento);
    printf("%d %d %d", valor, incrementado, decrementado);
}

void incrementarDecrementar(int *valor, int *incrementado, int *decrementado)
{
    (*incrementado)++;
    *decrementado = *decrementado - 2;
}