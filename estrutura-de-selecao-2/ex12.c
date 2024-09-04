#include <stdio.h>

int main()
{
    int esctipo, escorigem, escdestino;
    float c, f, k, m, km, mi, seg, min, hora;

    printf("Escolha a conversao: \n 1. Temperatura \n 2. Distancia \n 3. Tempo \n");
    scanf("%d", &esctipo);

    switch (esctipo)
    {
        case 1:
            printf("Qual a unidade que deseja converter? \n 1. Celsius \n 2. Fahrenheit \n 3. Kelvin \n");
            scanf("%d", &escorigem);
            switch (escorigem)
            {
            case 1:
                printf("Para qual unidade? \n 1. Fahrenheit \n 2. Kelvin \n ");
                scanf("%d", &escdestino);
                printf("Qual a temperatura em Celsius? ");
                scanf("%f", &c);
                f = (c * 1.8) + 32;
                k = c + 273;

                switch (escdestino)
                {
                case 1:
                    printf("Sao %.2f Fahrenheit", f);
                    return 0;
                    break;

                case 2:
                    printf("Sao %.2f Kelvin", k);
                    return 0;
                    break;

                default:
                    printf("Escolha invalida");
                    return 0;
                    break;
                }
                break;
            case 2:
                printf("Para qual unidade? \n 1. Celsius \n 2. Kelvin \n ");
                scanf("%d", &escdestino);
                printf("Qual a temperatura em Fahrenheit? ");
                scanf("%f", &f);
                c = ((f - 32) * 5) / 9;
                k = c + 273;
                switch (escdestino)
                {
                    case 1:
                        printf("Sao %.2f Celsius", c);
                        return 0;
                        break;

                    case 2:
                        printf("Sao %.2f Kelvin", k);
                        return 0;
                        break;

                    default:
                        printf("Escolha invalida");
                        return 0;
                        break;
                    }

            case 3:
                printf("Para qual unidade? \n 1. Celsius \n 2. Fahrenheit \n ");
                scanf("%d", &escdestino);
                printf("Qual a temperatura em Kelvin? ");
                scanf("%f", &k);
                c = k - 273;
                f = (c * 1.8) + 32;
                switch (escdestino)
                {
                    case 1:
                        printf("Sao %.2f Celsius", c);
                        return 0;    
                        break;
                    case 2:
                        printf("Sao %.2f Fahrenheit", f);
                        return 0;
                        break;
                    default:
                        printf("Escolha invalida");
                        return 0;
                        break;
                    }
                    break;
                    default:
                        printf("Escolha invalida");
                        return 0;
                        break;
            }
            break;

        case 2:
            printf("Qual a unidade que deseja converter? \n 1. Metros \n 2. Quilometros \n 3. Milhas \n");
            scanf("%d", &escorigem);
            switch (escorigem)
            {
                case 1:
                    printf("Para qual unidade? \n 1. Quilometros \n 2. Milhas \n ");
                    scanf("%d", &escdestino);
                    printf("Qual a distancia em Metros? ");
                    scanf("%f", &m);
                    km = m / 1000;
                    mi = km / 1.6;

                    switch (escdestino)
                    {
                    case 1:
                        printf("Sao %.2f quilometros", km);
                        return 0;
                        break;

                    case 2:
                        printf("Sao %.2f milhas", mi);
                        return 0;
                        break;

                    default:
                        printf("Escolha invalida");
                        return 0;
                        break;
                    }
                    break;
                case 2:
                    printf("Para qual unidade? \n 1. Metro \n 2. Milha \n ");
                    scanf("%d", &escdestino);
                    printf("Qual a distancia em quilometros? ");
                    scanf("%f", &km);
                    m = km * 1000;
                    mi = km / 1.6;
                    switch (escdestino)
                    {
                        case 1:
                            printf("Sao %.2f metros", m);
                            return 0;
                            break;

                        case 2:
                            printf("Sao %.2f milhas", mi);
                            return 0;
                            break;

                        default:
                            printf("Escolha invalida");
                            return 0;
                            break;
                    }
                case 3:
                    printf("Para qual unidade? \n 1. Metro \n 2. Quilometro \n ");
                    scanf("%d", &escdestino);
                    printf("Qual a distancia em milhas? ");
                    scanf("%f", &mi);
                    km = mi * 1.6;
                    m = km / 1000;
                    switch (escdestino)
                    {
                        case 1:
                            printf("Sao %.2f metros", m);
                            return 0;
                            break;

                        case 2:
                            printf("Sao %.2f quilometros", km);
                            return 0;
                            break;

                        default:
                            printf("Escolha invalida");
                            return 0;
                            break;
                        }
                        break;
                default:
                    printf("Escolha invalida");
                    return 0;
                    break;
            }

            break;

        case 3:
            printf("Qual a unidade que deseja converter? \n 1. Segundos \n 2. Minutos \n 3. Horas \n");
            scanf("%d", &escorigem);
            switch (escorigem)
            {
                case 1:
                    printf("Para qual unidade? \n 1. Minuto \n 2. Hora \n ");
                    scanf("%d", &escdestino);
                    printf("Qual o tempo em segundos? ");
                    scanf("%f", &seg);
                    min = seg / 60;
                    hora = min / 60;

                    switch (escdestino)
                    {
                    case 1:
                        printf("Sao %.2f minutos", min);
                        return 0;
                        break;

                    case 2:
                        printf("Sao %.2f horas", hora);
                        return 0;
                        break;

                    default:
                        printf("Escolha invalida");
                        return 0;
                        break;
                    }
                    break;
                case 2:
                    printf("Para qual unidade? \n 1. Segundos \n 2. Horas \n ");
                    scanf("%d", &escdestino);
                    printf("Qual o tempo em minutos? ");
                    scanf("%f", &min);
                    seg = min * 60;
                    hora = min / 60;
                    switch (escdestino)
                    {
                        case 1:
                            printf("Sao %.2f segundos", seg);
                            return 0;
                            break;

                        case 2:
                            printf("Sao %.2f horas", hora);
                            return 0;
                            break;

                        default:
                            printf("Escolha invalida");
                            return 0;
                            break;
                    }
                case 3:
                    printf("Para qual unidade? \n 1. Segundos \n 2. Minutos \n ");
                    scanf("%d", &escdestino);
                    printf("Qual o tempo em horas? ");
                    scanf("%f", &hora);
                    min = hora * 60;
                    seg = min * 60;
                    switch (escdestino)
                    {
                        case 1:
                            printf("Sao %.2f segundos", seg);
                            return 0;
                            break;

                        case 2:
                            printf("Sao %.2f minutos", min);
                            return 0;
                            break;

                        default:
                            printf("Escolha invalida");
                            return 0;
                            break;
                        }
                        break;
                default:
                    printf("Escolha invalida");
                    return 0;
                    break;
            }
                break;

        default:
            printf("Escolha invalida");
            break;
    }
}