#include <stdio.h>
#include <math.h>

int main()
{
    int fatorial = 1, num;
    float x, cos = 0, xgrau;

    printf("Entre com o valor de x: ");
    scanf("%f", xgrau);

    x = xgrau*3.14/180;

    for(int i=0; i<10; i+=2)
    {
        num = i;
        fatorial = 1;
        while(num>=1)
        {
            fatorial *= num;
            num--;
        }
        cos += pow(-1,i/2) * pow(x, i)/fatorial;

    }
    printf("cos(%.2f) = %f", xgrau, cos);
}