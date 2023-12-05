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
    int gordo,anorexico;
    if (Num1 > Num2)
        gordo = Num1;
    else
        gordo= Num2;
    if (Num3 > gordo)
        gordo = Num3;
    if (Num4 > gordo)
        gordo = Num4;
    if (Num5 > gordo)
        gordo = Num5;
    
    if (Num1 > Num2)
        anorexico = Num2;
    else
        anorexico= Num1;
    if (Num3 < anorexico)
        anorexico = Num3;
    if (Num4 < anorexico)
        anorexico = Num4;
    if (Num5 < anorexico)
        anorexico = Num5;
    printf("\nEl numero mas grande existente es: %d\n",gordo);
    printf("\nEl numero mas pequeno existente es: %d\n",anorexico);
}

void MateProf::Estadisticas(int N1, int N2, int N3, int* suma, int* producto, int* menor, int* mayor, float* promedio)
{
    *suma = N1 + N2 + N3;
    *producto = N1 * N2 * N3;
    *menor = (N1 < N2) ? N1 : N2;
        /*
         if (N1 < N2)
            *menor=N1;
         else
            *menor = N2;
        */
    if (N3 < *menor)
        *menor = N3;
    *mayor = (N1 > N2) ? N1:N2;
    if (N3 > *mayor)
        *mayor = N3;
    *promedio = *suma / 3.0;
}

bool MateProf::Multiplo(int n1, int n2)
{
    if ((n1 % n2) == 0)
        return true;
    else
        return false;
}

void MateProf::Iva(double importe, double *iva, double *total)
{
    *iva = importe * .15;
    *total = importe + *iva;
    
}

bool MateProf::TanX(int catetoOpuesto, int catetoAdyacente, double* tangX)
{
    if(catetoAdyacente == 0)
        return false;
    *tangX = catetoOpuesto / (double)catetoAdyacente;
    return true;
}

bool MateProf::Chicharron(double a, double b, double c, double* raiz, double* raiz2)
{
    if(a == 0)
        return false;
    double discriminante = pow(b,2) - (4.0 * a * c);
    if(discriminante < 0)
        return false;
    *raiz = (-b + sqrt(discriminante)) / (2.0 * a);
    *raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);
    return true;
}

bool MateProf::SenX(int CatetoOpuesto, int Hipotenusa, double *senX)
{
    *senX = CatetoOpuesto / Hipotenusa;
    printf("%lf\n",*senX);
    printf("%d\n",CatetoOpuesto);
    printf("%d\n",Hipotenusa);
}

int MateProf::TipoTriangulo(int ladoA, int ladoB, int ladoC)
{
    int suma1,suma2,suma3;
    suma1=ladoA+ladoB;
    suma2=ladoB+ladoC;
    suma3=ladoC+ladoA;

    if(suma1>ladoC && suma2>ladoA && suma3>ladoB)
    {
        printf("\nEs un triangulo\n");
        if (ladoA!=ladoB && ladoB!=ladoC && ladoA!=ladoC)
        {
            printf("\nEs un triangulo escaleno\n");
        }
        else
            if(ladoA==ladoB && ladoB!=ladoC && ladoA!=ladoC || ladoB==ladoC && ladoB!=ladoA && ladoC!=ladoA || ladoA==ladoC && ladoA!=ladoB && ladoC!=ladoB)
            {
                printf("\nisosceles\n");
            }
            else
            {
                printf("\nequilatero\n");
            }
    }
    else
    {
        printf("\nNo es un triangulo porque no cumple el teorema de desigualdad de un triangulo\n");
    }
}