#include <stdio.h>
#include "Inicio.h"
#include <iostream>
#include "ConversionesNew.h"
#include "Calculadora.h"
#include "FormulasComplejas.h"
#include "Fechas.h"

int main(int argc, char** argv) {
    
//InicioOpciones
    while (true)
    {
        int InicioOp = 0;
        Inicio c;
        InicioOp = c.Iniciop();
        if (InicioOp != 1 && InicioOp != -1 && InicioOp != 2 && InicioOp != 3 && InicioOp != 4)
        {
            printf("\nFavor de colocar una opcion valida\n----------------\n");
            fflush(stdout);
            while (getchar() != '\n'); // Limpiar el búfer de entrada
            continue; // Reiniciar el bucle
        }
        while (getchar() != '\n');
        if (InicioOp == 1)
        {
            ConversionesNew c;
        }
        else if (InicioOp == 2)
        {
            Calculadora c;
        }
        else if (InicioOp == 3)
        {
            FormulasComplejas c;
        }
        else if (InicioOp == 4)
        {
            int fecha, anio, mes, dia;
            printf("Dame una fecha (AAAAMMDD): ");
            fflush(stdout);
            scanf("%d",&fecha);
            Fechas f;
            anio = f.Anio(fecha);
            dia = f.Dia(fecha);
            printf("La fecha %d tiene ano %d, dia %d, mes %d", fecha, anio, dia, mes);
            //Fechas c;
        }
        else if (InicioOp == 5)
        {
            double AreaLadoIcosaedro, AreaIcosaedro;
            printf("Dame el area de un lado de un icosaedro: ");
            fflush(stdout);
            scanf("%lf",&AreaLadoIcosaedro);
            //MateProf mate;
            //AreaIcosaedro = mate.AreaIcosaedro(AreaLadoIcosaedro);
            printf("El area del icosaedro es %lf",AreaIcosaedro);
        }
        else if (InicioOp == -1)
        {
            printf("Gracias por utilizar esta cosa");
            break;
        }
        else
        {
            printf("\nOcurrio erro, Informar con el siguiente texto: %d\n----------------\n",InicioOp);
            fflush(stdout);
        }
    }
    
    return 0;
}

//printf("Soy un pro");
    //float Millas, Kilometros, Libras, Kilogramos;
    //printf("Tu dame los datos: ");
    //fflush(stdout);
   //scanf("%f", &Libras);
    //Conversiones c;
    //Millas = c.KilometrosAMillas(Kilometros);
    //Kilogramos = c.LibrasAKilogramos(Libras);
   //printf("%f Los kilometros equivalen a %f Millas",Kilometros,Millas);
    //printf("%f Las libras equivalen a %f Kilogramos",Libras,Kilogramos);
