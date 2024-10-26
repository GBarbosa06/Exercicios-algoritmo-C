#include <stdio.h>

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    for (int j = 4; j >= 0; j--)
    {
        printf("%d ", num[j]);
    }
    
    
}