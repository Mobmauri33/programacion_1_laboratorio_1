#include <stdio.h>
#include <stdlib.h>
#include <limits>
#define cantidad_numeros_a_solicitar 3

int main()
{
    calcularMaximoMinimo();
    return 0;
}
int obtenerCantidadNumerosParaSacarPromedio(void)
{
    int numeros;
    int acumulador=0;
    int i;
    int maximo = INT_MIN;
    int minimo = INT_MAX;
    float promedio;

    for(i=0;i<cantidad_numeros_a_solicitar;i++)
    {
        printf("Ingrese 3 numeros: ");
        scanf("%d" , &numeros);
        acumulador+=numeros;
        acumulador=acumulador+numeros;
        if(calcularMaximoMinimo(numeros, &maximo, &minimo))
        {
            printf("Error");
            break;
        }
    }
    //promedio =(float)acumulador/cantidad_numeros_a_solicitar;
    if(calcularPromedio(acumulador,cantidad_numeros_a_solicitar,&promedio) == 0)
    {
        printf("El promedio es:%.2f",promedio);
    }
    else{
        printf("ERROR");
    }
    return 0;
}

int calcularPromedio(int valorAcumulado, int cantidad, float *promedio)
{
    int retorno = -1;
    if(cantidad > 0 && promedio != NULL)
    {
        *promedio =(float)valorAcumulado/cantidad;
        retorno = 0;
    }
    return retorno;
}
int calcularMaximoMinimo(int valorIngresado, int *maximo, int *minimo)
{
    int retorno= -1;
    if(*maximo != NULL && *minimo != NULL)
    {
        if(valorIngresado > *maximo)
    {
        *maximo = valorIngresado;
    }
    if(valorIngresado < *minimo)
    {
        *minimo = valorIngresado;
    }
    retorno = 0;
    }
    return retorno;
}
