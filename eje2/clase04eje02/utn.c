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
