#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANTIDAD_ALUMNOS 5
int main()
{
    int aEdades[CANTIDAD_ALUMNOS];
    getArrayInt("Ingrese edad","Edad invalida",120,0,5,aEdades,CANTIDAD_ALUMNOS);
    printArrayInt(aEdades,CANTIDAD_ALUMNOS);
}


