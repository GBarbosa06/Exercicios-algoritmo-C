#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); //matem sempre uma inicialização diferente
    int m[8][8];
    int dificuldade, esc;
    printf("Escolha um nivel de dificuldade: \n 1. Facil \n 2. Medio \n 3. Dificil\n   ");
    scanf("%d", &esc);  
    switch (esc)
    {
    case 1:
        dificuldade = 25;
        break;
    case 2:
        dificuldade = 50;
        break;
    case 3:
        dificuldade = 75;
        break;
    
    default:
        printf("Escolha invalida");
        break;
    }  

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 || i == 7 || j == 0 || j == 7)
            {
                m[i][j] = 1;
            }
            else
            {
                if((rand()%100) >= dificuldade) //Quanto maior a variavel dificuldade, menores as chances de m[][] ser 0
                {
                    m[i][j] = 0;
                }
                else
                {
                    m[i][j] = 9;
                }
            }
            
        }
        
    }
    for (int i = 0; i < 8; i++)
    {
        printf("|");
        for (int j = 0; j < 8; j++)
        {
            printf(" %d ", m[i][j]);
            printf("|");
        }
        printf("\n-----------------------------------\n");
    }
    
}