#include <stdio.h>

void incrementarDecrementar(int *incrementado, int *decrementado);

int main()
{
    int valor = 5;
    int incrementado = valor, decrementado = valor;
    int *ptrIncremento = &incrementado, *ptrDecremento = &decrementado;

    incrementarDecrementar(ptrIncremento, ptrDecremento);
    printf("%d %d %d", valor, incrementado, decrementado);
}

void incrementarDecrementar(int *incrementado, int *decrementado)
{
    (*incrementado)++;
    *decrementado = *decrementado - 2;
}