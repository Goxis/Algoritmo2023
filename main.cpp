#include <stdio.h>
#include <stdbool.h> //para el if????
#include "Inicio.h"
#include <iostream>
#include "ConversionesNew.h"
#include "Calculadora.h"
#include "FormulasComplejas.h"
#include "Fechas.h"
#include "MateProf.h"
#include "Negocios.h"

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
            printf("El prisma recto es %lf \n\n",rppp2);
        
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
            printf("\n%d es mayor\n\n",May);
            
            int n1,n2;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&n1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&n2);
            MateProf ma;
            int May = ma.Mayor2(n1,n2);
            printf("\nPrimer num:%d Segundo num:%d\n",n1,n2);
            if (n1 == n2)
            {
                printf ("Los numeros son iguales\n");
            }
            else
            {
                printf("EL mayor es:%d\n",May);
            }
            
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
            int May = ma.NumIgual(n1,n2,n3);
            
            int n1,n2,n3,n4,n5;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&n1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&n2);
            printf("Dame el tercero numero: ");
            fflush(stdout);
            scanf("%d",&n3);
            printf("Dame el cuarto numero: ");
            fflush(stdout);
            scanf("%d",&n4);
            printf("Dame el quinto numero: ");
            fflush(stdout);
            scanf("%d",&n5);
            MateProf ma;
            int May = ma.CincoNumeros(n1,n2,n3,n4,n5);      
            
            int N1,N2,N3;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&N1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&N2);
            printf("Dame el tercero numero: ");
            fflush(stdout);
            scanf("%d",&N3);
            MateProf ma;
            int suma, producto, menor, mayor;
            float promedio;
            ma.Estadisticas(N1,N2,N3,&suma,&producto,&menor,&mayor,&promedio);
            printf("Suma: %d, Producto: %d, Menor: %d, Mayor: %d, Promedio %f", suma, producto, menor, mayor, promedio);
        
            int n1,n2;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&n1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&n2);
            MateProf ma;
            if(ma.Multiplo(n1,n2))
                printf("El %d es multipli de %d\n",n1,n2);
            
            
            double importe, iva, total;
            printf("Dame el importe: ");
            fflush(stdout);
            scanf("%lf",&importe);
            MateProf ma;
            ma.Iva(importe,&iva,&total);
            printf("El importe %lf causo un iva de %lf y un total de %lf",importe,iva,total);
            
            
            double venta, importeIva, totalAPagar;
            printf("Dame el importe: ");
            fflush(stdout);
            scanf("%lf",&venta);
            Negocios neg;
            printf("main: valor de venta %lf, direccion de venta %x\n",venta,&venta);
            printf("main: valor de importe iva %lf, direccion de importe Iva %x",importeIva,&importeIva);
            printf("main: valor de total a pagar %lf, direccion de total a pagar %x",totalAPagar,&totalAPagar);
            neg.Iva(venta,&importeIva,&totalAPagar);
            printf("El importe %lf causo un iva de %lf y un total de %lf",venta,importeIva,totalAPagar);
            
            
            int co, ca;
            double tan;
            printf("Dame la longitud del cateto opuesto: ");
            fflush(stdout);
            scanf("%d",&co);
            printf("Dame la longitud del cateto adyacente: ");
            fflush(stdout);
            scanf("%d",&ca);
            MateProf mat;
            if(mat.TanX(co,ca,&tan))
                printf("La tangente fue %lf\n",tan);
            else
                printf("No se pudo calcular la tangente");
            
            
            double a, b, c, r1, r2;
            printf("Dame el coeficiente del término cuadrático: ");
            fflush(stdout);
            scanf("%lf",&a);
            printf("Dame el coeficiente del término lineal: ");
            fflush(stdout);
            scanf("%lf",&b);
            printf("Dame la constante: ");
            fflush(stdout);
            scanf("%lf",&c);
            MateProf mate;
            if(mate.Chicharron(a,b,c,&r1,&r2))
                printf("Las raíces son %lf y %lf\n\n",r1,r2);
            else
                printf("No se pudieron calcular las soluciones de la ecuación cuadrática\n\n");
            
            
            int VariableEpicA, VariableEpicB;
            double Vava;
            printf("Dame el coeficiente del término cuadrático: ");
            fflush(stdout);
            scanf("%d",&VariableEpicA);
            printf("Dame el coeficiente del término lineal: ");
            fflush(stdout);
            scanf("%d",&VariableEpicB);
            MateProf mate;
            if (VariableEpicB == 0){
                printf("\n---------Favor de colocar la hipotenusa correctamente---------\n\n");
            }
            else{
                mate.SenX(VariableEpicA, VariableEpicB, &Vava);
                printf("\n\nEl seno de un angulo es de: %lf\n\n\n",Vava);
            }
            
             *  
            int nn1,nn2,nn3;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&nn1);
            printf("Dame el segundo numero: ");
            fflush(stdout);
            scanf("%d",&nn2);
            printf("Dame el tercero numero: ");
            fflush(stdout);
            scanf("%d",&nn3);
            MateProf ma;
            ma.TipoTriangulo(nn1,nn2,nn3);
  
            
            int valorInverso;
            printf("Dame el primer numero: ");
            fflush(stdout);
            scanf("%d",&valorInverso);
            if (valorInverso == 0)
            {
                printf("El valor es de 0\n\n");
            }
            else
            {
                MateProf ma;
                ma.Inverso(valorInverso);
            }
            
            
            float kil,altu;
            printf("Dame el kilo: ");
            fflush(stdout);
            scanf("%f",&kil);
            printf("Dame la altura: ");
            fflush(stdout);
            scanf("%f",&altu);
            MateProf ma;
            ma.IMC(kil,altu);

            int NumOne;
            printf("Dame el primer digito: ");
            fflush(stdout);
            scanf("%d",&NumOne);
            MateProf ma;
            ma.EsImpar(NumOne);
            
            int Hipo, Cate;
            double pruebis;
            printf("Dame la hipotenusa: ");
            fflush(stdout);
            scanf("%d",&Hipo);
            printf("Dame el cateto: ");
            fflush(stdout);
            scanf("%d",&Cate);
            //MateProf ma;
            ma.CseX(Hipo, Cate, &pruebis);
            if (pruebis == 0)
            {
                printf("El cateto opuesto es 0\n");
                //return false;
            }
            else 
            {
                printf("El cateto opuesto es de: %lf\n",pruebis);
                //return true;
            }
            */
            
            int LaditoA, LaditoB, LaditoC;
            printf("Dame el ladito A: ");
            fflush(stdout);
            scanf("%d",&LaditoA);
            printf("Dame el ladito B: ");
            fflush(stdout);
            scanf("%d",&LaditoB);
            printf("Dame el ladito C: ");
            fflush(stdout);
            scanf("%d",&LaditoC);
            MateProf ma;
            ma.AreaXSemi(LaditoA, LaditoB, LaditoC);
            
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
