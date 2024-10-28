#include <stdio.h>

int strlenS(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;

    
}

int main()
{
    char s[] = "texto";
    printf("Sua string tem %d caracteres", strlenS(s));
}

