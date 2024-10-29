#include <stdio.h>
#include <string.h>

void strdel(char *s, int p) 
{
    int len = strlen(s);

    for (int i = p; i < len - 1; i++) 
    {
        s[i] = s[i + 1];
    }
    s[len] = '\0';
}

int main() {
    char s[] = "Texto da questao";
    int p = 7;

    strdel(s, p);
    printf("%s", s);

}