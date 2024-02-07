
#ifndef MATEPROF_H
#define MATEPROF_H

class MateProf {
public:
    double AreaIcosaedro(double AreaLado);
    double AreaOctaedro(double AreaLado);
    double TeoremaPitagoras(double CatetoA, double CatetoB);
    double TeoremaPoliedros(int Aristas, int Vertices);
    double SumaAngulosPoligono(int Lados);
    int Mayor3(int Num1, int Num2, int Num3);
    int Mayor2(int Num1, int Num2);
    int NumIgual(int Num1, int Num2, int Num3);
    int CincoNumeros(int Num1, int Num2, int Num3, int Num4, int Num5);
    void Estadisticas(int N1, int N2, int N3, int *suma, int *producto, int *menor, int *mayor, float *promedio);
    bool Multiplo(int n1, int n2);
    void Iva(double importe, double* iva, double* total);
    bool TanX(int catetoOpuesto, int catetoAdyacente, double* tangX);
    bool Chicharron(double a, double b, double c, double* raiz, double* raiz2);
    bool SenX(int CatetoOpuesto, int Hipotenusa, double *senX);
    int TipoTriangulo(int ladoA, int ladoB, int ladoC);
    float Inverso(double Num);
    float IMC(float kilogramos, float altura);
    float EsImpar(int Num);
    bool CseX(int Hipotenusa, int CatetoOpuesto, double *cseX);
    float AreaXSemi(int LadoA, int LadoB, int LadoC);
    bool SeeXX(int Hipotenusa, int CatetoAdyacente, double *seeX);
    int Positivo20();
    void SumayMedia(int *suma, int *media);
    int TresenTres();
    int SumaCuadrados100();
    double Serie100();
    double Serie500();
    int FactoresPro();
    int Invertido(int num);
    int ContarDigitos(int num);
    int Divisible9(int num);
    int AdivinaMiNumero();
    void ParesRango();
    void PromedioHasta0();
    void NoCeros();
private:

};

#endif /* MATEPROF_H */

