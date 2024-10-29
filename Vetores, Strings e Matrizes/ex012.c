#include <stdio.h>

int main()
{
    int l;
    printf("Digite a quantidade de valores por lado da matriz: ");
    scanf("%d", &l);

    int m[l][l];
    int aux;

    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {

            printf("Digite o valor da celula %d da linha %d: ", j, i);
            scanf("%d", &aux);
            m[i][j] = aux;
        }
        
    }

    printf("Diagonais: ");
    for (int i = 1; i <= l; i++)
    {
        printf(" %d", m[i][i]);
    }

    printf("\nMatriz completa: \n");
    for (int i = 1; i <= l; i++)
    {
        printf("|");
        for (int j = 1; j <= l; j++)
        {
            printf(" %d ", m[i][j]);
            printf("|");
        }
        printf("\n-------------\n");
    }
    
    
}