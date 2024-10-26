#include <stdio.h>

void carrega(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", v);
        v++;
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    carrega(vetor, n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: %d\n", i+1, vetor[i]);
    }
}