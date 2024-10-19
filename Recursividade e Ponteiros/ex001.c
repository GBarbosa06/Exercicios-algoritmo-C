#include <stdio.h>

int fatorial(int num);
int resto(int dividendo, int divisor);
int quociente(int dividendo, int divisor);
int soma(int n1, int n2);
    int suc(int n);
    int pred(int n);


int main()
{
    int esc, n1, n2;
    printf(" 1. Fatorial \n 2. Resto \n 3. Quociente \n 4. Soma \n Escolha uma opcao: ");
    scanf("%d", &esc);
    switch(esc)
    {
    case 1:
        printf("Digite um numero: ");
        scanf("%d", &n1);
        printf("O resultado eh %d.", fatorial(n1));
        break;
    case 2:
        printf("Entre com a divisao: ");
        scanf("%d/%d", &n1,&n2);
        printf("O resto eh %d.", resto(n1,n2));
        break;
    case 3:
        printf("Entre com a divisao: ");
        scanf("%d / %d", n1,n2);
        printf("O resultado eh %d.", quociente(n1,n2));
        break;
    case 4:
        printf("Entre com dois valores: ");
        scanf("%d+%d", &n1,&n2);
        printf("O resultado eh %d.", soma(n1,n2));
        break;
    
    default:
        printf("Escolha inválida");
        break;
    }
}

int fatorial(int num)
{
    int fat = 1;
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return (fat = num * fatorial(num-1));
    }

}
int resto(int dividendo, int divisor)
{
    if (dividendo < divisor)
    {
        return dividendo;
    }
    else
    {
        return resto(dividendo-divisor, divisor);
    }
    
    //fazer subtrações sucessivas e contar quantas subtrações foram feitas (usar como if o x-n>0 ou 1, avaliar)
}
int quociente(int dividendo, int divisor)
{

}
int soma(int n1, int n2)
{

}
    int suc(int n)
    {

    }
    int pred(int n)
    {

    }