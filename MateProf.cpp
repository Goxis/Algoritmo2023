#include "MateProf.h"
#include <stdio.h>
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

int MateProf::Mayor2(int Num1, int Num2)
{
    int Mayor,Vl;
    if (Num1 == Num2)
    {
        //printf("Los numeros son iguales: %d",Num1);
        Mayor = Num1;
    }
    else if (Num1 > Num2)
    {
        Mayor = Num1;
    }
    else
    {
        Mayor = Num2;
    }
    return Mayor;
}

int MateProf::NumIgual(int Num1, int Num2, int Num3)
{
    if ((Num1 + Num2) == Num3)
        printf("El primer y segundo sumados dan el tercero: %d\n", Num3);
    else 
        if ((Num2 + Num3) == Num1)
            printf("El segundo y tercero sumados dan el primero: %d\n", Num1);
        else 
            if ((Num1 + Num3) == Num2)
                printf("El primero y tercero sumados dan el segundo: %d\n", Num2);
            else
                printf("Ningun numero son iguales sumados >:c\n");
}

int MateProf::CincoNumeros(int Num1, int Num2, int Num3, int Num4, int Num5)
{
    
}