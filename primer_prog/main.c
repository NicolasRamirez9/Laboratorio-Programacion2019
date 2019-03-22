#include <stdio.h>
#include <stdlib.h>
#define CANT_NROS_A_SOLICITAR 3

int numerosYSacarPromedio(void);
int calcularPromedio(int valorAcumulado, int cantidad, float *promedio);

int main()
{
    numerosYSacarPromedio();
    return 0;
}

int numerosYSacarPromedio(void)
{
    int numeros;
    int acumuladorDeNros = 0;
    int i;
    float promedio;

    for(i=0;i<CANT_NROS_A_SOLICITAR;i++)
    {
        printf("Ingresar 3 numeros: ");
        scanf("%d", &numeros);
        acumuladorDeNros += numeros;
    }
    //promedio = (float)acumuladorDeNros / CANT_NROS_A_SOLICITAR;
    if(!calcularPromedio(acumuladorDeNros,CANT_NROS_A_SOLICITAR,&promedio))
    {
        printf("El promedio es: %.2f", promedio);
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
        *promedio = (float)valorAcumulado / cantidad;
        retorno = 0;
    }
    return retorno;
}
