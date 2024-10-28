#include <stdio.h>

void strcpyT(char s[], char t[], int i)
{   
    int j = 0; 
    while(t[j] != '\0')
    {
        s[i] = t[j];
        i++; //i é para pegar toda o texto já existente na string
        j++; //j é para zerar a contagem da nova string
    }
    s[i] = '\n';
    
    
}

int main()
{
    char string[] = "Texto: ";
    int i = (sizeof(string) - 1);
    strcpyT(string, "Teste", i);
    printf("%s", string);
}

