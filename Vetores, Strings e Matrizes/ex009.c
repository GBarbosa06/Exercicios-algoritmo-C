#include <stdio.h>

void strcaT(char s[], char t[], int i)
{   
    int j = 0; 
    while(t[j] != '\0')
    {
        s[i] = t[j];
        i++;
        j++;
    }
    s[i] = '\0';
    
}

int main()
{
    char string[] = "Texto: ";
    int i = (sizeof(string) - 1);
    strcaT(string, "Teste", i);
    printf("%s", string);
}