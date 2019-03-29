#include <stdio.h>
#include <stdlib.h>

int getFloat(char *mensaje,char *mensajeError,float minimo,float maximo,float reintentos,float *resultado)

int main()
{

    float numeroIngresado;
    getFloat("Ingrese el numero","Error",0,10,2, &numeroIngresado);
    printf("El numero ingresado es %f", numeroIngresado);
    return 0;
}
int isValidInt(float numero,float minimo,float maximo)
{
if(numero >= minimo && numero <= maximo)
{
        return 1;
}
        return 0;
}

int getFloat(char *mensaje,char *mensajeError,float minimo,float maximo,float reintentos,float *resultado)
{
    int buffer;
    int i;
    int retorno=-1;
    if(mensaje != NULL && mensajeError != NULL && resultado != NULL && maximo>=minimo && reintentos >=0)
    {
        do
        {
            printf("%s",mensaje);
            scanf("%f",&buffer);
            if(isValidInt(buffer, minimo, maximo))
            {
                *resultado = buffer;
                retorno = 0;
                break;
                }else
                {
                    printf("%s",mensajeError);
                }
                reintentos--;
    }while(reintentos >= 0);
}
    return retorno;
}
