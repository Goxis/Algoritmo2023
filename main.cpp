#include <stdio.h>
#include "Inicio.h"
#include <iostream>
#include "ConversionesNew.h"
#include "Calculadora.h"
#include "FormulasComplejas.h"
#include "Fechas.h"
#include "MateProf.h"

int validarDato(const char* fm, void* var)
{
    int ch;
    /* Sí scanf devuelve 0, es porque no se cumplió con el formato especificado. */
    if(!scanf(fm, var))
    {
        /* Limpiamos el búfer del teclado, así logramos que la próxima llamada de scanf pause el programa. */
        while((ch = getchar()) != '\n' && ch != EOF);
        printf("\n\n\n\n\nFavor de colocar correctamente los datos");
        return 1;
    }

    /* Verifica sí el búfer quedó sucio. */
    if(getchar() != '\n')
    {
        /* Limpiamos el búfer del teclado. */
        while((ch = getchar()) != '\n' && ch != EOF);
        printf("\n\n\n\n\nFavor de colocar correctamente los datos");
        return 1;
    }
    return 0;
}

int main(int argc, char** argv) {
    
//InicioOpciones
    while (true)
    {
        int InicioOp = 0;
        Inicio c;
        InicioOp = c.Iniciop();
        if (InicioOp != 1 && InicioOp != -1 && InicioOp != 2 && InicioOp != 3 && InicioOp != 4 && InicioOp != 5)
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
            printf("\n\n\n\n\n\n\n\n");
            while (true)
            {
                do
                {
                    printf("\n\nDame una fecha (AAAAMMDD): ");
                    fflush(stdout);
                    //scanf("%d",&fecha);
                }while(validarDato("%d", &fecha));
                if (fecha < 0)
                {
                    printf("\n\n\n\n\nFavor de no colocar signos");
                }
                else
                {
                    int Mun;
                    Mun = fecha;
                    int MunCifras = 1;
                    while (Mun >= 10)
                    {
                        Mun = Mun / 10;
                        MunCifras ++;
                    }
                    if (MunCifras == 8)
                    {
                        break;
                    }
                    else
                    {
                        printf("\n\n\n\n\nFavor de colocar bien la fecha");
                    }
                }
            }
            Fechas f;
            anio = f.Anio(fecha);
            dia = f.Dia(fecha);
            mes = f.Mes(fecha);
            printf("\n\n\n\n\nLa fecha %d tiene ano %d, dia %d, mes %d\n\n", fecha, anio, dia, mes);
        }
        else if (InicioOp == 5)
        {
            /*double AreaLadoIcosaedro, AreaIcosaedro;
            printf("\n\n\n\n\n\n\n\n");
            do
            {
                printf("\nDame el area de un lado de un icosaedro: ");
                fflush(stdout);
            }
            while(validarDato("%lf", &AreaLadoIcosaedro));
            {
                MateProf mate;
                AreaIcosaedro = mate.AreaIcosaedro(AreaLadoIcosaedro);
                printf("\n\n\n\nEl area del icosaedro es %lf\n\n",AreaIcosaedro);
            }
            double AreaLadoOctaedro,AreaOctaedro;
            printf("\nDame el area de un lado de un Octaedro: ");
            fflush(stdout);
            scanf("%lf", &AreaLadoOctaedro);
            MateProf mate;
            AreaOctaedro = mate.AreaOctaedro(AreaLadoOctaedro);
            printf("El area del octaedro es %lf\n",AreaOctaedro);
            
            double a,b,c;
            printf("\nDame la longitud del cateto A: ");
            fflush(stdout);
            scanf("%lf", &a);
            printf("\nDame la longitud del cateto B: ");
            fflush(stdout);
            scanf("%lf", &b);
            //MateProf matematiUwU;
            //c = matematiUwU.TeoremaPitagoras(a,b);
            //MateProf mate;
            c = mate.TeoremaPitagoras(a,b);
            printf("La hipotenusa dio %lf",c);
            
            int rp,rp2,rpF;
            printf("\nDame el numero de aristas: ");
            fflush(stdout);
            scanf("%d", &rp);
            printf("\nDame el numero de vortices: ");
            fflush(stdout);
            scanf("%d", &rp2);
            rpF = mate.TeoremaPoliedros(rp,rp2);
            printf("Las caras del poliedro son %d", rpF);
            
            double rpp,rpp2;
            printf("\nDame un angulo: ");
            fflush(stdout);
            scanf("%lf", &rpp);
            rpp2 = 3.1416 / 180;
            rpp2 = rpp * rpp2;
            printf("El angulo en radiales es %lf \n\n",rpp2);
            
            double rppp,rppp2;
            printf("\nDame la area de base: ");
            fflush(stdout);
            scanf("%lf", &rppp);
            printf("\nDame la altura: ");
            fflush(stdout);
            scanf("%lf", &rppp2);
            rppp2 = rppp * rppp2;
            rppp2 = rppp2 / 3;
            printf("El prisma recto es %lf \n\n",rppp2);*/
        
            int n1,n2,n3;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&n1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&n2);
            printf("Dame el tercero numero: ");
            fflush(stdout);
            scanf("%d",&n3);
            MateProf ma;
            int May = ma.Mayor3(n1,n2,n3);
            printf("\nPrimer numero:%d Segundo numero:%d Tercer Numero:%d",n1,n2,n3);
            printf("\n%d es mayor\n",May);
            
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
