#include "Fechas.h"


int Fechas::Anio(int fecha)
{
    return fecha / 10000;
}

int Fechas::Dia(int fecha)
{
    return fecha % 100;
}
int Fechas::Mes(int fecha)
{
    int procesof = fecha / 10000;
    int proceso = procesof * 10000;
    
    return (fecha - proceso) / (100);
}


