#include <stdio.h>

#define multiplo(a, b) ((a%b==0) ? 1:0) 

int main()
{
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (multiplo(a,b) == 1) //apenas para dar um resultado visivel
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}