#include "Calculadora.h"
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath> //Para el pow
//#include "muParser/muParser.h" //Para lo matematico eso

//Estaria bien que agarrara la respuesta anterior

bool EsFloat(const std::string& str) {
    bool puntoEncontrado = false;
    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        if (!isdigit(c)) {
            if (c == '.' && !puntoEncontrado) {
                puntoEncontrado = true;
            } else if ((c == '-' || c == '+') && i == 0) {
                // Permitir signo negativo o positivo solo en la primera posición
            } else {
                return false; // Otros caracteres no son válidos
            }
        }
    }

    // Asegurarse de que al menos un dígito haya sido ingresado antes del punto
    if (!puntoEncontrado || str.find_first_of("0123456789") == std::string::npos) {
        return false;
    }

    return true;
}

float Calculadora::CalculadoraSuma(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a sumar: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                while (true)
                {
                    printf("-----------------\n");
                    printf("%f + _____\n",RespuestaOne);
                    printf("Favor de pasar el segundo digito a sumar: ");
                    fflush(stdout);
                    std::string entrada;
                    std::cin >> entrada;
                    if (EsFloat(entrada)) {
                        RespuestaTwo = std::atof(entrada.c_str());
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = RespuestaOne + RespuestaTwo;
                        printf("%f + %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                        printf("\n====================");
                        Resultado = Respuesta;
                        
                        std::string Lsd;
                        while (true)
                        {
                            printf("\nDesea guardar el resultado para un proximo calculo?\n");
                            printf("(Sí/No): ");
                            fflush(stdout);
                            std::cin >> Lsd;
                            if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                                Vueltas = 1;
                                system("pause");
                                break;
                            } else if (Lsd == "No" || Lsd == "no") {
                                system("pause");
                                break;
                            } else {
                                printf("\n\n\n\n\n\n");
                                printf("====================\n");
                                float Respuesta = RespuestaOne + RespuestaTwo;
                                printf("%f + %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                                printf("\n====================");
                                printf("\nRespuesta no válida.\n");
                            }
                        }
                        break; // Aqui va si puso todo bn
                    } else {
                        printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                        fflush(stdout);
                    }
                }
                break; // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            while (true)
            {
                // +++++++++++++++++++++++++++++++++++++++++++
                printf("-----------------\n");
                printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
                printf("-----------------\n");
                printf("Favor de pasar el primer digito a sumar: ");
                fflush(stdout);
                std::string entrada;
                std::cin >> entrada;
                if (EsFloat(entrada)) {
                    RespuestaOne = std::atof(entrada.c_str());

                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = RespuestaOne + Resultado;
                    printf("%f + %f = %f",RespuestaOne, Resultado, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;

                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = RespuestaOne + Resultado;
                            printf("%f + %f = %f",RespuestaOne, Resultado, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break; // Aqui va si puso todo bn
                } else {
                    printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                    fflush(stdout);
                }
                // +++++++++++++++++++++++++++++++++++++++++++
            }
            
            break;
        }
    }
    return Resultado;
}

float Calculadora::CalculadoraResta(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a restar: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                while (true)
                {
                    printf("-----------------\n");
                    printf("%f - _____\n",RespuestaOne);
                    printf("Favor de pasar el segundo digito a restar: ");
                    fflush(stdout);
                    std::string entrada;
                    std::cin >> entrada;
                    if (EsFloat(entrada)) {
                        RespuestaTwo = std::atof(entrada.c_str());
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = RespuestaOne - RespuestaTwo;
                        printf("%f - %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                        printf("\n====================");
                        Resultado = Respuesta;
                        
                        std::string Lsd;
                        while (true)
                        {
                            printf("\nDesea guardar el resultado para un proximo calculo?\n");
                            printf("(Sí/No): ");
                            fflush(stdout);
                            std::cin >> Lsd;
                            if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                                Vueltas = 1;
                                system("pause");
                                break;
                            } else if (Lsd == "No" || Lsd == "no") {
                                system("pause");
                                break;
                            } else {
                                printf("\n\n\n\n\n\n");
                                printf("====================\n");
                                float Respuesta = RespuestaOne - RespuestaTwo;
                                printf("%f - %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                                printf("\n====================");
                                printf("\nRespuesta no válida.\n");
                            }
                        }
                        break; // Aqui va si puso todo bn
                    } else {
                        printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                        fflush(stdout);
                    }
                }
                break; // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            while (true)
            {
                // +++++++++++++++++++++++++++++++++++++++++++
                printf("-----------------\n");
                printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
                printf("-----------------\n");
                printf("Favor de pasar el primer digito a restar: ");
                fflush(stdout);
                std::string entrada;
                std::cin >> entrada;
                if (EsFloat(entrada)) {
                    RespuestaOne = std::atof(entrada.c_str());

                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = Resultado - RespuestaOne;
                    printf("%f - %f = %f",Resultado, RespuestaOne, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;

                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = Resultado - RespuestaOne;
                            printf("%f - %f = %f",Resultado, RespuestaOne, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break; // Aqui va si puso todo bn
                } else {
                    printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                    fflush(stdout);
                }
                // +++++++++++++++++++++++++++++++++++++++++++
            }
            
            break;
        }
    }
    return Resultado;
}

float Calculadora::CalculadoraMultiplicacion(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a multiplicar: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                while (true)
                {
                    printf("-----------------\n");
                    printf("%f * _____\n",RespuestaOne);
                    printf("Favor de pasar el segundo digito a multiplicar: ");
                    fflush(stdout);
                    std::string entrada;
                    std::cin >> entrada;
                    if (EsFloat(entrada)) {
                        RespuestaTwo = std::atof(entrada.c_str());
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = RespuestaOne * RespuestaTwo;
                        printf("%f * %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                        printf("\n====================");
                        Resultado = Respuesta;
                        
                        std::string Lsd;
                        while (true)
                        {
                            printf("\nDesea guardar el resultado para un proximo calculo?\n");
                            printf("(Sí/No): ");
                            fflush(stdout);
                            std::cin >> Lsd;
                            if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                                Vueltas = 1;
                                system("pause");
                                break;
                            } else if (Lsd == "No" || Lsd == "no") {
                                system("pause");
                                break;
                            } else {
                                printf("\n\n\n\n\n\n");
                                printf("====================\n");
                                float Respuesta = RespuestaOne * RespuestaTwo;
                                printf("%f * %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                                printf("\n====================");
                                printf("\nRespuesta no válida.\n");
                            }
                        }
                        break; // Aqui va si puso todo bn
                    } else {
                        printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                        fflush(stdout);
                    }
                }
                break; // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            while (true)
            {
                // +++++++++++++++++++++++++++++++++++++++++++
                printf("-----------------\n");
                printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
                printf("-----------------\n");
                printf("Favor de pasar el primer digito a multiplicar: ");
                fflush(stdout);
                std::string entrada;
                std::cin >> entrada;
                if (EsFloat(entrada)) {
                    RespuestaOne = std::atof(entrada.c_str());

                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = RespuestaOne * Resultado;
                    printf("%f * %f = %f",RespuestaOne, Resultado, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;

                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = RespuestaOne * Resultado;
                            printf("%f * %f = %f",RespuestaOne, Resultado, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break; // Aqui va si puso todo bn
                } else {
                    printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                    fflush(stdout);
                }
                // +++++++++++++++++++++++++++++++++++++++++++
            }
            
            break;
        }
    }
    return Resultado;
}

float Calculadora::CalculadoraDivision(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a dividir: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                while (true)
                {
                    printf("-----------------\n");
                    printf("%f / _____\n",RespuestaOne);
                    printf("Favor de pasar el segundo digito a dividir: ");
                    fflush(stdout);
                    std::string entrada;
                    std::cin >> entrada;
                    if (EsFloat(entrada)) {
                        RespuestaTwo = std::atof(entrada.c_str());
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = RespuestaOne / RespuestaTwo;
                        printf("%f / %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                        printf("\n====================");
                        Resultado = Respuesta;
                        
                        std::string Lsd;
                        while (true)
                        {
                            printf("\nDesea guardar el resultado para un proximo calculo?\n");
                            printf("(Sí/No): ");
                            fflush(stdout);
                            std::cin >> Lsd;
                            if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                                Vueltas = 1;
                                system("pause");
                                break;
                            } else if (Lsd == "No" || Lsd == "no") {
                                system("pause");
                                break;
                            } else {
                                printf("\n\n\n\n\n\n");
                                printf("====================\n");
                                float Respuesta = RespuestaOne / RespuestaTwo;
                                printf("%f / %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                                printf("\n====================");
                                printf("\nRespuesta no válida.\n");
                            }
                        }
                        break; // Aqui va si puso todo bn
                    } else {
                        printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                        fflush(stdout);
                    }
                }
                break; // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            while (true)
            {
                // +++++++++++++++++++++++++++++++++++++++++++
                printf("-----------------\n");
                printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
                printf("-----------------\n");
                printf("Favor de pasar el primer digito a dividir: ");
                fflush(stdout);
                std::string entrada;
                std::cin >> entrada;
                if (EsFloat(entrada)) {
                    RespuestaOne = std::atof(entrada.c_str());

                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = Resultado / RespuestaOne;
                    printf("%f / %f = %f",Resultado, RespuestaOne, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;

                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = Resultado / RespuestaOne;
                            printf("%f / %f = %f",Resultado, RespuestaOne, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break; // Aqui va si puso todo bn
                } else {
                    printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                    fflush(stdout);
                }
                // +++++++++++++++++++++++++++++++++++++++++++
            }
            
            break;
        }
    }
    return Resultado;
}

float Calculadora::CalculadoraPotencia(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a potenciar: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                while (true)
                {
                    printf("-----------------\n");
                    printf("%f ^ _____\n",RespuestaOne);
                    printf("Favor de pasar el segundo digito a potenciar: ");
                    fflush(stdout);
                    std::string entrada;
                    std::cin >> entrada;
                    if (EsFloat(entrada)) {
                        RespuestaTwo = std::atof(entrada.c_str());
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = pow(RespuestaOne, RespuestaTwo);
                        printf("%f ^ %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                        printf("\n====================");
                        Resultado = Respuesta;
                        
                        std::string Lsd;
                        while (true)
                        {
                            printf("\nDesea guardar el resultado para un proximo calculo?\n");
                            printf("(Sí/No): ");
                            fflush(stdout);
                            std::cin >> Lsd;
                            if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                                Vueltas = 1;
                                system("pause");
                                break;
                            } else if (Lsd == "No" || Lsd == "no") {
                                system("pause");
                                break;
                            } else {
                                printf("\n\n\n\n\n\n");
                                printf("====================\n");
                                float Respuesta = pow(RespuestaOne, RespuestaTwo);
                                printf("%f ^ %f = %f",RespuestaOne, RespuestaTwo, Respuesta);
                                printf("\n====================");
                                printf("\nRespuesta no válida.\n");
                            }
                        }
                        break; // Aqui va si puso todo bn
                    } else {
                        printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                        fflush(stdout);
                    }
                }
                break; // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            while (true)
            {
                // +++++++++++++++++++++++++++++++++++++++++++
                printf("-----------------\n");
                printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
                printf("-----------------\n");
                printf("Favor de pasar el primer digito a potenciar: ");
                fflush(stdout);
                std::string entrada;
                std::cin >> entrada;
                if (EsFloat(entrada)) {
                    RespuestaOne = std::atof(entrada.c_str());

                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = pow(Resultado, RespuestaOne);
                    printf("%f ^ %f = %f",Resultado, RespuestaOne, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;

                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = pow(Resultado, RespuestaOne);
                            printf("%f ^ %f = %f",Resultado, RespuestaOne, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break; // Aqui va si puso todo bn
                } else {
                    printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                    fflush(stdout);
                }
                // +++++++++++++++++++++++++++++++++++++++++++
            }
            
            break;
        }
    }
    return Resultado;
}

float Calculadora::CalculadoraRaizCuadrada(float Resultado) {
    printf("\n\n\n\n\n\n\n\n");
    while (true)
    {
        float RespuestaOne=0;
        float RespuestaTwo=0;
        if (Vueltas == 0)
        {
            printf("-----------------\n");
            printf("Recordarles que es necesario agregar un '.' (Osea 1.0)\n");
            printf("-----------------\n");
            printf("Favor de pasar el primer digito a sacar la raiz: ");
            fflush(stdout);
            std::string entrada;
            std::cin >> entrada;
            if (EsFloat(entrada)) {
                RespuestaOne = std::atof(entrada.c_str());
                
                if (RespuestaOne > 0)
                {
                    printf("\n\n\n\n\n\n");
                    printf("====================\n");
                    float Respuesta = std::sqrt(RespuestaOne);
                    printf("Raiz cuadrada de %f = %f",RespuestaOne, Respuesta);
                    printf("\n====================");
                    Resultado = Respuesta;
                    
                    std::string Lsd;
                    while (true)
                    {
                        printf("\nDesea guardar el resultado para un proximo calculo?\n");
                        printf("(Sí/No): ");
                        fflush(stdout);
                        std::cin >> Lsd;
                        if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                            Vueltas = 1;
                            system("pause");
                            break;
                        } else if (Lsd == "No" || Lsd == "no") {
                            Vueltas = 0;
                            Resultado = 0;
                            system("pause");
                            break;
                        } else {
                            printf("\n\n\n\n\n\n");
                            printf("====================\n");
                            float Respuesta = std::sqrt(RespuestaOne);
                            printf("Raiz cuadrada de %f = %f",RespuestaOne, Respuesta);
                            printf("\n====================");
                            printf("\nRespuesta no válida.\n");
                        }
                    }

                    break;
                }
                else
                {
                    printf("\n\n\n\n\nEntrada no valida. El numero debe de ser positivo.\n");
                    fflush(stdout);
                    system("pause");
                    printf("\n\n\n\n\n");
                }
                
                // Aqui va si puso todo bn
            } else {
                printf("\n\n\n\n\nEntrada no válida. Ingresa un número decimal válido.\n");
                fflush(stdout);
            }
        }
        else
        {
            
            if (Resultado > 0)
            {
                printf("\n\n\n\n\n\n");
                printf("====================\n");
                float Respuesta = std::sqrt(Resultado);
                printf("Raiz cuadrada de %f = %f",Resultado, Respuesta);
                printf("\n====================");
                Resultado = Respuesta;

                std::string Lsd;
                while (true)
                {
                    printf("\nDesea guardar el resultado para un proximo calculo?\n");
                    printf("(Sí/No): ");
                    fflush(stdout);
                    std::cin >> Lsd;
                    if (Lsd == "Sí" || Lsd == "sí" || Lsd == "Si" || Lsd == "si") {
                        Vueltas = 1;
                        system("pause");
                        break;
                    } else if (Lsd == "No" || Lsd == "no") {
                        Vueltas = 0;
                        Resultado = 0;
                        system("pause");
                        break;
                    } else {
                        printf("\n\n\n\n\n\n");
                        printf("====================\n");
                        float Respuesta = std::sqrt(Resultado);
                        printf("Raiz cuadrada de %f = %f",Resultado, Respuesta);
                        printf("\n====================");
                        printf("\nRespuesta no válida.\n");
                    }
                }
            }
            else
            {
                printf("\n\n\n\n\nEntrada no valida. El numero debe de ser positivo.\n");
                fflush(stdout);
                system("pause");
                printf("\n\n\n\n\n");
            }
            break;
        }
    }
    return Resultado;
}

Calculadora::Calculadora() {
    fflush(stdout);
    Vueltas = 0;
    float Resultado = 0;
    while (true)
    {
        
        int EleccionMenuCalculadora = 0;
        if (Resultado == 1)
        {
            printf("\n\n-------CALCULADORA-------\n");
            printf("\nNumero:%f\n\n",Resultado);
            printf("1 - Suma\n");
            printf("2 - Resta\n");
            printf("3 - Multiplicacion\n");
            printf("4 - Division\n");
            printf("5 - Potencia\n");
            printf("6 - Raiz Cuadrada\n");
            printf("0 - Salir\n");
        }
        else
        {
            printf("\n\n-------CALCULADORA-------\n");
            printf("1 - Suma\n");
            printf("2 - Resta\n");
            printf("3 - Multiplicacion\n");
            printf("4 - Division\n");
            printf("5 - Potencia\n");
            printf("6 - Raiz Cuadrada\n");
            printf("0 - Regresar\n");
        }
        printf("Opcion: ");
        fflush(stdout);
        scanf("%d", &EleccionMenuCalculadora);
        if (EleccionMenuCalculadora != 1 && EleccionMenuCalculadora != 2 && EleccionMenuCalculadora != 3 && EleccionMenuCalculadora != 4 && EleccionMenuCalculadora != 5 && EleccionMenuCalculadora != 6 && EleccionMenuCalculadora != 0)
        {
            printf("\nFavor de colocar una opcion valida\n----------------\n");
            fflush(stdout);
            while (getchar() != '\n'); // Limpiar el búfer de entrada
            printf("\n");
            for(int Lsd = 0; Lsd <= 3; Lsd = Lsd + 1)
            {
                Sleep(1000);
                printf("==");
            }
            continue; // Reiniciar el bucle
        }
        if (EleccionMenuCalculadora == 1)
        {
            Resultado = CalculadoraSuma(Resultado);
        }
        else if (EleccionMenuCalculadora == 2)
        {
            Resultado = CalculadoraResta(Resultado);
        }
        else if (EleccionMenuCalculadora == 3)
        {
            Resultado = CalculadoraMultiplicacion(Resultado);
        }
        else if (EleccionMenuCalculadora == 4)
        {
            Resultado = CalculadoraDivision(Resultado);
        }
        else if (EleccionMenuCalculadora == 5)
        {
            Resultado = CalculadoraPotencia(Resultado);
        }
        else if (EleccionMenuCalculadora == 6)
        {
            Resultado = CalculadoraRaizCuadrada(Resultado);
        }
        else if (EleccionMenuCalculadora == 0)
        {
            printf("\n\n\n\n\n--------------------------------\n");
            break;
        }
        else
        {
            printf("Como putas pudiste conseguir este mensaje???????");
        }
    }
}
// La calculadoraMenu al momento de colocar la respuesta en desimal de da un fallito aqui de chill
