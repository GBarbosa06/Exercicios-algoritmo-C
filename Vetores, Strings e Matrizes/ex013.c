#include <stdio.h>

int main()
{
    char ttt[3][3] = {' ', 'o', 'x', 'o', 'x' , 'o', 'x', ' ', ' '};

    for (int i = 0; i < 3; i++)
    {
        printf("|");
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", ttt[i][j]);
            printf("|");
        }
        printf("\n-------------\n");
    }
    
}