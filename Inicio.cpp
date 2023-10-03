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

