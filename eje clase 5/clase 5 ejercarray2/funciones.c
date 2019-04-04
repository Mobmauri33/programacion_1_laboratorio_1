#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "funciones.h"


    void printArrayInt( int* arrayResultado, int limite)
    {
        int i;
        for(i=0;i<limite;i++)
        {
            printf("%d\n", arrayResultado(i));
        }
    }

    int getArrayInt( char* mensaje, char* mensajeError, int maximo, int minimo, int reintentos,int limite, int* arrayResultado)
    {
        int retorno=-1;
        int i;
        int buffer;

        if(arrayResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<maximo && reintentos<0 && limite>0)
        {

            retorno 0;
            for(i=0;i<limite;i++)
        {
            if(utn_getNumero(&buffer,mensaje,mensajeError,minimo,maximo,reintentos)==0)
            {
                arrayResultado[i]=buffer;
            }
            else
            {
                retorno=-1;
                break;
            }

        }

    }



        return 0;
    }
