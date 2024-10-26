#include <stdio.h>

void putsT(const char *s);

int main() 
{
    char s[] = "Texto da questao";
    putsT(s);
}

void putsT(const char *s) 
{
    while (*s != '\0') 
    {
        putchar(*s);
        s++;
    }
}