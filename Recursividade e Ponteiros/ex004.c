#include <stdio.h>

void hanoi(int n, char t1[], char t2[], char t3[], int *contador);
int contador(int c);

int main()
{
    int nDiscos, contador = 0;
    printf("Digite o numero de discos: ");
    scanf("%d", &nDiscos);
    hanoi(nDiscos, "Origem", "Auxiliar", "Destino", &contador);
    printf("Numero minimo de movimentos: %d", contador);
}

void hanoi(int n, char t1[], char t2[], char t3[], int *contador)
{

    if (n==1)
    {
        printf("Mova o disco 1 de %s para %s \n", t1, t3);
        (*contador)++;
    }
    else
    {
        hanoi(n-1, t1, t3, t2, contador);
        printf("Mova o disco %d de %s para %s \n", n, t1, t3);
        hanoi(n-1, t2, t1, t3, contador);
        (*contador)++;
        
    }
    
}

int contador(int c)
{

}