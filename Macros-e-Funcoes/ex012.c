#include <stdio.h>

int bissexto(int ano);

int main()
{
    int ano;

    printf("Digite o ano para verificar se e bissexto ou nao: ");
    scanf("%d", &ano);
    bissexto(ano);
}

int bissexto(int ano)
{
    ano = ano%100;
    if(ano%4==0)
    {
        printf("E bissexto");
    }
    else
    {
        printf("Nao e bissexto");
    }
    
}