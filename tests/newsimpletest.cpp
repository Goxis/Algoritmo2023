
#include <stdlib.h>
#include <iostream>
#include <iostream>
#include "exprtk.hpp"

int main() {
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;

    std::string expresion;
    double resultado;

    symbol_table_t symbol_table;
    expression_t expression;
    parser_t parser;

    std::cout << "Ingrese una expresión matemática: ";
    std::getline(std::cin, expresion);

    if (parser.compile(expresion, expression, symbol_table)) {
        resultado = expression.value();
        std::cout << "Resultado: " << resultado << std::endl;
    } else {
        std::cout << "Expresión no válida." << std::endl;
    }

    return 0;
}




