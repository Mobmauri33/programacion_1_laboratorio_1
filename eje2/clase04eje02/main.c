#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    float numeroIngresado;
    getFloat("Ingrese el numero","Error",0,10,2, &numeroIngresado);
    printf("El numero ingresado es %f", numeroIngresado);
    return 0;
}
