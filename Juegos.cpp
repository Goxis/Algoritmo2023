#include "Juegos.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Juegos::AdivinaCaracter()
{
    char aleat, intento, enter;
    srand(time(NULL));
    aleat = (rand() % 26) + 97;
    while(true)
    {
        printf("Dame una letra minuscula: ");
        fflush(stdout);
        scanf("%c%c",&intento,&enter);
        if(intento < aleat)
        {
            printf("La letra que buscas es mayor\n");
        }
        else
        {
            if (intento > aleat)
            {
                printf("La letra que buscas es menor\n");
            }
            else
            {
                printf("Encontraste a la letra %c\n",aleat);
                break;
            }
        }
    }
}

void Juegos::Balero()
{
    srand(time(NULL));
    int num, valor;
    valor = 0;
    for(int i = 1; i <= 9; i += 1)
    {
        while (true)
        {
            num = rand();
            if (num <= 8 && num >= 0)
            {
                break;
            }
        }
        if (num == 1)
        {
            printf("Hiciste un Sencillo: 1\n");
            valor = valor + 1;
        }
        if (num == 2)
        {
            printf("Hiciste un Sencillo: 5\n");
            valor = valor + 5;
        }
        if (num == 3)
        {
            printf("Hiciste un Sencillo: 10\n");
            valor = valor + 10;
        }
        if (num == 4)
        {
            printf("Hiciste un Sencillo: 10\n");
            valor = valor + 10;
        }
        if (num == 5)
        {
            printf("Hiciste un Sencillo: 50\n");
            valor = valor + 50;
        }
        if (num == 6)
        {
            printf("Hiciste un Sencillo: 100\n");
            valor = valor + 100;
        }
        if (num == 7)
        {
            printf("Hiciste un Sencillo: 250\n");
            valor = valor + 250;
        }
        if (num == 8)
        {
            printf("Hiciste un Sencillo: 500\n");
            valor = valor + 500;
        }
    
    }
    printf("Su puntuacion fue de: %d", valor);
}