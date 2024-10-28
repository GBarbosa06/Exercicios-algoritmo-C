#include <stdio.h>

void strcpyT(char s[], char t[])
{
    int i = 0;
    while(t[i] != '\0')
    {
        s[i] = t[i];

        i++;
    }
    
    
}

int main()
{
    char string[6];
    strcpyT(string, "teste");
    printf("Nova string: '%s'", string);

}

