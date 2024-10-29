#include <stdio.h>

int strpoS(char s[], char c);

int main()
{
    char c;
    char alf[] = "abcdefghijklmnopqrstuvwxyz";
    printf("Digite um caracter: ");
    scanf("%c", &c);
    printf("Posicao %d do alfabeto", strpoS(alf, c));
}

int strpoS(char s[], char c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return i+1;
        }
        else
        {
            i++;
        }
    }
    return -1;
    
}