#include <stdio.h>
#define MAXDIR 3
#include <stdlib.h>

int pedirPromedio(void);

int main()
{
    pedirPromedio();
    return 0;
}

int pedirPromedio(void)
{
    int numero1;
    int numero2;
    int numero3;
    int acumulador=0;
    int promedio;

    printf("\nIngrese el numero 1:");
    scanf ("%d",&numero1);
    printf("\ningrese el numero 2:");
    scanf ("%d",&numero2);
    promedio = (numero1+numero2+numero3)/3;
    printf("El promedio es: %d",resultado);
}
