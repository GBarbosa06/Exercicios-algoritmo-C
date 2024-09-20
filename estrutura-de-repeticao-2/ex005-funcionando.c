#include <stdio.h>
#include <math.h>

int main()
{
    int fatorial = 1, num;
    float x, cos = 0;

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
}