#include <stdio.h>
#include <stdlib.h>

int calcularPromedio(int valor[], int cantidad, float *promedio){

int retorno= -1;
int i;
int acumulador;


    for(i=0; i<cantidad; i++)
    {
        acumulador+=valor[i];


    }

    *promedio=(float)acumulador/cantidad;

       if(cantidad >0 || promedio!=NULL)
    {
        retorno=0;
    }
    return retorno;
}





/*int calcularMayor(int valor[], int cantidad, int *resultado)
{

    int i;
    for(i=0; i<cantidad; i++)
    {
        if(valor[]>flag)
        {
            *resultado=flag;
        }
    }
return *resultado;
}*/
