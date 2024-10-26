#include <stdio.h>

int main()
{
    int valor = 0, objetivo;
    int count[5] = {0, 0, 0, 0, 0};

    printf("Digite valor inteiro: ");
    scanf("%d", &objetivo);

    while (valor<objetivo)
    {
        if (valor+100<=objetivo)
        {
            valor += 100;
            (count[4])++;
        }
        else if (valor+50<=objetivo)
        {
            valor +=50;
            (count[3])++;
        }
        else if (valor+10<=objetivo)
        {
            valor+=10;
            (count[2])++;
        }
        else if (valor+5<=objetivo)
        {
            valor+=5;
            (count[1])++;
        }
        else
        {
            valor+=1;
            (count[0])++;
        }
    }
    printf("%d cedulas de RS100,00\n %d cedulas de RS50,00\n %d cedulas de RS10,00\n %d cedulas de RS5,00\n %d cedulas de RS1,000", count[4], count[3], count[2], count[1], count[0]);
    
    
}