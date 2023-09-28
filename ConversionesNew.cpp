#include "ConversionesNew.h"
#include <stdio.h>
#include <stdbool.h>

float ConversionesNew::KilometrosAMillas (float Kilometros) {
    float Millas = Kilometros/1.609;
    return Millas;
}

float ConversionesNew::LibrasAKilogramos (float Libras) {
    float Kilogramos = Libras*0.453592;
    return Kilogramos;
}

float ConversionesNew::FahrenheitACelcius (float Fahrenheit) {
    float Proceso = (float)5 / 9;
    float CelciusProceso = Fahrenheit - 32;
    float Celcius = Proceso * CelciusProceso;
    return Celcius;
}

ConversionesNew::ConversionesNew() {
    while (true)
    {
    
        int Op;
        printf("\n\n\n------------------------------\n");
        printf("Que tipo de conversion quieres?\n");
        printf("1 - Kilometros a Millas\n");
        printf("2 - Libras a Kilometros\n");
        printf("3 - Fahrenheit  a Celcius\n");
        printf("0 - Regresar\n");
        printf("Opcion: ");
        fflush(stdout);
        scanf("%d", &Op);
        
        if (Op != 1 && Op != 2 && Op != 3 && Op != 0)
        {
                printf("\nFavor de colocar una opcion valida\n");
                fflush(stdout);
                while (getchar() != '\n'); // Limpiar el búfer de entrada
                continue; // Reiniciar el bucle
        }
        while (getchar() != '\n');
        
        if (Op == 1)
        {
            float Kilometros, Millas;
            printf("\n\n\n----Kilometros a Millas----\n");
            printf("Kilometros: ");
            fflush(stdout);
            scanf("%f", &Kilometros);
            Millas = KilometrosAMillas(Kilometros);
            printf("%f Los kilometros equivalen a %f Millas\n",Kilometros,Millas);
            printf("---------------------------------\n");
            break;
        }
        else if (Op == 2)
        {
            float Libras, Kilogramos;
            printf("\n\n\n----Libras a Kilogramos----\n");
            printf("Libras: ");
            fflush(stdout);
            scanf("%f", &Libras);
            Kilogramos = LibrasAKilogramos(Libras);
            printf("%f Los kilometros equivalen a %f Millas\n",Libras,Kilogramos);
            printf("---------------------------------\n");
            break;
        }
        else if (Op == 3)
        {
            float Fahrenheit, Celcius;
            printf("\n\n\n----Fahrenheit a Celcius----\n");
            printf("Fahrenheit: ");
            fflush(stdout);
            scanf("%f", &Fahrenheit);
            Celcius = FahrenheitACelcius(Fahrenheit);
            printf("%f Los Fahrenheit equivalen a %f Celcius\n",Fahrenheit,Celcius);
            printf("---------------------------------\n");
            break;
        }
        else if (Op == 0)
        {
            printf("\n\n\n\n\n--------------------------------\n");
            break;
        }
        else
        {
            printf("----------------------");
            printf("\nOcurrio erro, Informar con el siguiente texto: %d\n",Op);
        }
    
    }
}


