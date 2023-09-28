#include "FormulasComplejas.h"
#include <stdio.h>
#include <iostream>

float FormulasComplejas::ComplejaSuma(float Resultado)
{
    printf("\n\n\n\n\n\n\n\n");
    int ValorA = 0;
    int ValorB = 0;
    int ValorC = 0;
    int ValorD = 0;
    while (true);
    {
        printf("Formula:\n(a,b)+(c,d)");
        printf("\nInserte 'a': ");
        fflush(stdout);
        scanf("%d", &ValorA);
        printf("\nInserte 'b': ");
        fflush(stdout);
        scanf("%d", &ValorB);
        printf("\nInserte 'c': ");
        fflush(stdout);
        scanf("%d", &ValorC);
        printf("\nInserte 'd': ");
        fflush(stdout);
        scanf("%d", &ValorD);
        
    }
}

FormulasComplejas::FormulasComplejas()
{
    printf("\n\n\n\n\n\n\n\n");
    float Resultado;
    while (true)
    {
        int EleccionMenuComplejo = 1;
        printf("\n\n-------FORMULAS COMPLEJAS-------\n");
        printf("1 - Suma (a,b)+(c,d)\n");
        printf("0 - Regresar\n");
        printf("Opcion: ");
        //fflush(stdout);
        std::cin >> EleccionMenuComplejo;
        printf("%d",EleccionMenuComplejo);
        if (EleccionMenuComplejo != 1 && EleccionMenuComplejo != 0)
        {
            printf("\nFavor de colocar una opcion valida\n----------------\n");
            fflush(stdout);
            while (getchar() != '\n'); // Limpiar el búfer de entrada
            printf("\n");
        }
        else if (EleccionMenuComplejo == 1)
        {
            printf("asdjaksdnajsd");
            Resultado = ComplejaSuma(Resultado);
        }
        else if (EleccionMenuComplejo == 0)
        {
            printf("\n\n\n\n\n--------------------------------\n");
            break;
        }
    }
}

