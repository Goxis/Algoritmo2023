#include "Inicio.h"
#include <stdio.h>
#include <stdbool.h>

int Inicio::Iniciop()
{
    int EleccionInicio,InicioOp;
    //int EleccionInicio;
    printf("1 - Conversiones\n");
    printf("2 - Calculadora\n");
    printf("3 - Formulas Complejas\n");
    printf("4 - Fechas\n");
    printf("5 - Area del icosaedro\n");
    printf("0 - Salir\n");
    printf("Opcion: ");
    fflush(stdout);
    scanf("%d", &EleccionInicio);

    if (EleccionInicio == 1)
    {
        //printf("Elegiste la opcion 1");
        InicioOp = 1;
    }
    else if (EleccionInicio == 2)
    {
        //printf("Gracias por utilizar esta cosa");
        InicioOp = 2;
    }
    else if (EleccionInicio == 3)
    {
        InicioOp = 3;
    }
    else if (EleccionInicio == 4)
    {
        InicioOp = 4;
    }
    else if (EleccionInicio == 5)
    {
        InicioOp = 5;
    }
    else if (EleccionInicio == 0)
    {
        //printf("Gracias por utilizar esta cosa");
        InicioOp = -1;
    }
    else
    {
        //printf("Favor de elegir una opción válida");
        InicioOp = 0;
    }
    return InicioOp;
}

int Inicio::SeleccionVariada()
{
    int EleccionVariada,InicioOpV;
    //int EleccionInicio;
    printf("1 - Sacar el area del lado Icosaedro\n");
    printf("2 - Sacar hipotenusa\n");
    printf("3 - Sacar las caras del poliedro\n");
    printf("4 - Sacar el angulo de radiales\n");
    printf("5 - Sacar el prisma recto\n");
    printf("6 - Sacar que numero es mayor");
    printf("7 - Sacar si son iguales o que son iguales");
    printf("8 - Numeros sumados den uno de esos");
    printf("9 - Sin organizar");
    printf("0 - Salir\n");
    printf("Opcion: ");
    fflush(stdout);
    scanf("%d", &EleccionVariada);

    if (EleccionVariada == 1)
    {
        //printf("Elegiste la opcion 1");
        InicioOpV = 1;
    }
    else if (EleccionVariada == 2)
    {
        //printf("Gracias por utilizar esta cosa");
        InicioOpV = 2;
    }
    else if (EleccionVariada == 3)
    {
        InicioOpV = 3;
    }
    else if (EleccionVariada == 4)
    {
        InicioOpV = 4;
    }
    else if (EleccionVariada == 5)
    {
        InicioOpV = 5;
    }
    else if (EleccionVariada == 6)
    {
        InicioOpV = 6;
    }
    else if (EleccionVariada == 7)
    {
        InicioOpV = 7;
    }
    else if (EleccionVariada == 8)
    {
        InicioOpV = 8;
    }
    else if (EleccionVariada == 9)
    {
        InicioOpV = 9;
    }
    else if (EleccionVariada == 0)
    {
        //printf("Gracias por utilizar esta cosa");
        InicioOpV = -1;
    }
    else
    {
        //printf("Favor de elegir una opción válida");
        InicioOpV = 0;
    }
    return InicioOpV;
}