#include <stdio.h>
#include <stdlib.h>
#define cantidad_numeros_a_solicitar 3

int main()
{
    obtenerCantidadNumerosParaSacarPromedio();
    return 0;
}
int obtenerCantidadNumerosParaSacarPromedio(void)
{
    int numeros;
    int acumulador=0;
    int i;
    float promedio;
    for(i=0;i<cantidad_numeros_a_solicitar;i++)
    {
        printf("Ingrese 3 numeros: ");
        scanf("%d" , &numeros);
        acumulador+=numeros;
    }
    promedio =(float)acumulador/cantidad_numeros_a_solicitar;
    printf("El promedio es:%.2f",promedio);
    return 0;
}
