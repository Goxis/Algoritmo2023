#include "MateProf.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h> //Para rand
#include <time.h> //Para rand

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
    if (Hipotenusa == 0)
    {
        return false;
    }
    *senX = (double)CatetoOpuesto / (double)Hipotenusa;
    return true;
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

float MateProf::Inverso(double Num)
{
    printf("\n\n\n1/%lf\n\n",Num);
    return 1.0 / Num;
}

float MateProf::IMC(float kilogramos, float altura)
{
    float IMC;
    IMC = altura * altura;
    IMC = kilogramos/IMC;
    if (IMC < 18.5)
    {
        printf("\nSu peso es bajo\n");
        printf("\nIMC: %f",IMC);
    }
    else
    {
        if (IMC > 18.5 && IMC < 24.9)
        {
            printf("\nSu peso es normal\n");
            printf("\nIMC: %f",IMC);
        }
        else
        {
            if (IMC > 25 && IMC < 29.9)
            {
                printf("\nTiene sobrepeso\n");
                printf("\nIMC: %f",IMC);
            }
            else
            {
                if (IMC > 30 && IMC < 34.9)
                {
                    printf("\nTiene obesidad\n");
                    printf("\nIMC: %f",IMC);
                }
                else
                {
                    if (IMC > 35)
                    {
                        printf("\nTiene obesidad morbida\n");
                        printf("\nIMC: %f",IMC);
                    }
                }
            }
        }
    }
}

float MateProf::EsImpar(int Num)
{
    int UwU;
    UwU = Num % 2;
    if (UwU == 0)
    {
        printf("\n\nEs par\n");
    }
    else
    {
        printf("\n\nEs impar\n");
    }
    printf("Residuo de la division: %d\n", UwU);
}

bool MateProf::CseX(int Hipotenusa, int CatetoOpuesto, double *cseX)
{
    *cseX = (double)Hipotenusa / (double)CatetoOpuesto;
    if (*cseX == 0)
    {
        return false;
    }
    else 
    {
        return true;
    }
}

float MateProf::AreaXSemi(int LadoA, int LadoB, int LadoC)
{
    double pesopluma, AreaFinal;
    pesopluma = ((double)LadoA + (double)LadoB + (double)LadoC) / 2;
    AreaFinal = sqrt((pesopluma*(pesopluma-(double)LadoA)*(pesopluma-(double)LadoB)*(pesopluma-(double)LadoC)));
    printf("El area final es de %lf\n", AreaFinal);
}

bool MateProf::SeeXX(int Hipotenusa, int CatetoAdyacente, double *seeX)
{
    if (Hipotenusa == 0)
    {
        return false;
    }
    *seeX = (double)Hipotenusa / (double)CatetoAdyacente;
    if (CatetoAdyacente == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int MateProf::Positivo20()
{
    int num, positivos = 0;
    for(int i = 1; i <= 20; i++)
    {
        printf("Dame un numero: ");
        fflush(stdout);
        scanf("%d",&num);
        if (num > 0)
            positivos++;
    }
    return positivos;
}

void MateProf::SumayMedia(int *suma, int *media)
{
    *suma = 0, *media = 0;
    for(int i = 1; i <= 200; i++)
    {
        *suma = *suma + i;
    }
    *media = *suma / 200;
}

int MateProf::TresenTres()
{
    int num = 3, suma = 0;
    printf("\n\n");
    for(int i = 1; i <= 99; i++)
    {
        suma = num + suma;
        printf("%d\n",num);
        num = num + 3;
    }
    printf("La suma de todo es: %d",suma);
}

int MateProf::SumaCuadrados100()
{
    int num = 0, suma = 0;
    printf("\n\n");
    for(int i = 1; i <= 100; i++)
    {
        num = i * i;
        suma = suma + num;
    }
    printf("La suma de todo es: %d",suma);
}

double MateProf::Serie100()
{
    double suma = 1.0;
    for(int i = 2; i < 200; i += 4)
    {
        suma = suma - (1.0 / (double)i);
        suma += 1.0 / (i + 2);
    }
    return suma;
}

double MateProf::Serie500(){
    double suma = 4.0;
    for(int i = 3; i < 10000000; i += 4)
    {
        suma = suma - (4.0 / (double)i);
        suma += 4.0 / (i + 2);
    }
    return suma;
}

int MateProf::FactoresPro()
{
    int funcion;
    printf("\nDame el numero: \n");
    fflush(stdout);
    scanf("%d",&funcion);
    for(int i = funcion; i > 0; i = i - 1)
    {
        if (funcion % i == 0)
        {
            printf("%d es un factor\n", i);
        }
    }
}

int MateProf::Invertido(int num)
{
    int inv = 0;
    while(num > 0)
    {
        inv *= 10;
        //printf("Primer: %d", inv);
        inv += num % 10;
        //printf("Segundo: %d", inv);
        num /= 10;
        //printf("Tercer: %d", num);
    }
    return inv;
}

int MateProf::ContarDigitos(int num)
{
    int inv = 0;
    int digitos = 0;
    while(num > 0)
    {
        inv *= 10;
        //printf("Primer: %d", inv);
        inv += num % 10;
        //printf("Segundo: %d", inv);
        num /= 10;
        //printf("Tercer: %d", num);
        digitos = digitos + 1;
    }
    return digitos;
}

int MateProf::Divisible9(int num)
{
    int va = 0;
    int val = 9;
    int inv = 0;
    while(num > 0)
    {
        inv = 0;
        inv *= 10;
        inv += num % 10;
        num /= 10;
        va = va + inv;
    }
    if (va % 9 == 0)
    {
        printf("\nEs divisible entre 9");
    }
    else
    {
        printf("\nNo es divisible entre 9");
    }
    return va;
}

int MateProf::AdivinaMiNumero()
{
    int num, min, max;
    min = 0;
    max = 100;
    int NumeroAdivinar;
    srand(time(NULL));
    while (true)
    {
        NumeroAdivinar = rand();
        if (NumeroAdivinar < max)
        {
            break;
        }
    }
    
    while (true)
    {
        while (true)
        {
            num = rand();
            if (num < max && num > min)
            {
                break;
            }
        }
        printf("pienso en %d\n",num);
        
        if (num == NumeroAdivinar)
        {
            printf("\n\nAdivinaste Perroooooo");
            break;
        }
        else
        {
            if (NumeroAdivinar > num)
            {
                printf("El numero a adivinar es MAYOR que %d\n",num);
                min = num;
            }
            else
            {
                printf("El numero a adivinar es MENOR que %d\n",num);
                max = num;
            }
        }
    }
}

void MateProf::ParesRango()
{
    int num, inv, max, min;
    max = 200;
    min = 100;
    printf("\n\n\n\nDame el numero pa saber qpd: ");
    fflush(stdout);
    scanf("%d",&num);
    for(int i = num; i <= 200; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d es un par\n", i);
        }
    }
}

void MateProf::PromedioHasta0()
{
    int NumeroIngresado, Vuelta, NumeroGuardado, Media;
    Vuelta = 0;
    NumeroIngresado = 0;
    NumeroGuardado = 0;
    while (true)
    {
        printf("Dame el numero pa saber qpd: ");
        fflush(stdout);
        scanf("%d",&NumeroIngresado);
        if (NumeroIngresado == 0)
        {
            break;
        }
        NumeroGuardado = NumeroGuardado + NumeroIngresado;
        Vuelta = Vuelta + 1;
    }
    Media = NumeroGuardado / Vuelta;
    printf("La media es de %d\n",Media);
    printf("Vueltas: %d\n",Vuelta);
    printf("Suma de numeros: %d",NumeroGuardado);
}