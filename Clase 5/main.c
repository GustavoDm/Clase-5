#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define CANTIDAD 5


int main()
{
    int valor[CANTIDAD];
    float promedio;
    int i;
    for(i=0; i<CANTIDAD; i++)
    {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &valor[i]);
    }
    if(calcularPromedio(valor, CANTIDAD, &promedio)==0)
        printf("El promedio es: %.2f", promedio);
    else
        printf("Hubo un error");

    return 0;
}
