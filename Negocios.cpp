#include <stdio.h>

#include "Negocios.h"

void Negocios::Iva(double importe, double* iva, double* total)
{
    printf("iva antes: valor de importe %lf, dirección de importe %x\n",
        importe,&importe);
    printf("iva antes: valor de iva %x, dirección de iva %x\n",
        iva,&iva);
    printf("iva antes: valor de total %x, dirección de total %x\n",
        total,&total);
    *iva = importe * 0.16;
    *total = importe + *iva;
    printf("iva después: valor de importe %lf, dirección de importe %x\n",
        importe,&importe);
    printf("iva después: valor de iva %x, dirección de iva %x\n",
        iva,&iva);
    printf("iva después: valor de total %x, dirección de total %x\n",
        total,&total);
}