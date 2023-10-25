#include "MateProf.h"
#include <math.h>

double MateProf::AreaIcosaedro(double AreaLado)
{
    return 5.0 * pow(AreaLado,2) * sqrt(3.0);
}

double MateProf::AreaOctaedro(double AreaLado)
{
    return 2.0 * pow(AreaLado,2) * sqrt(3.0);
}

double MateProf::TeoremaPitagoras(double CatetoA,double CatetoB)
{
    return sqrt(pow(CatetoA,2) + pow(CatetoB,2));
}

double MateProf::TeoremaPoliedros(int Aristas, int Vertices)
{
    return (Aristas - Vertices) + 2;
}

double MateProf::SumaAngulosPoligono(int lados)
{
    return (lados - 2)* 180;
}

int MateProf::Mayor3(int Num1, int Num2, int Num3)
{
    int Mayor;
    if (Num1 > Num2)
        Mayor = Num1;
    else
        Mayor = Num2;
    if (Mayor < Num3)
        Mayor = Num3;
    return Mayor;
}