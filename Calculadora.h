#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
private:
    int Vueltas;
    float Resultado;
public:
    float CalculadoraSuma(float Resultado);
    float CalculadoraResta(float Resultado);
    float CalculadoraMultiplicacion(float Resultado);
    float CalculadoraDivision(float Resultado);
    float CalculadoraPotencia(float Resultado);
    float CalculadoraRaizCuadrada(float Resultado);
    Calculadora();
};

#endif


