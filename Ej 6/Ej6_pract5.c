#include<stdio.h>
#include<stdlib.h>

int main()
{
    float facturacion[6];
    float suma, maxFact, minFact;
    int i, x, z;
    suma=0;

    
    printf("Ingrese la facturacion de los ultimos 6 meses:\n");
    for(i=0; i<6; i++)
    {
        printf("Mes %d:\n", i+1);
        scanf("%f", &facturacion[i]);
        suma = suma + facturacion[i];
    }
    printf("La facturacion total es de: $%f\n", suma);
    printf("El promedio de facturacion es de: $%f\n", suma/6);


    for(i=0; i<6; i++)
    {
        if(i==0)
        {
            maxFact= facturacion[i];
            minFact= facturacion[i];
        }
        else
        {
            if(maxFact<facturacion[i])
            {
                maxFact=facturacion[i];
                x=i;
            }
            else
            {
                if(minFact>facturacion[i])
                {
                    minFact=facturacion[i];
                    z=i;
                }
            }
        }
    }

    printf("La maxima facturacion fue de $%f, en el mes %d.\n", maxFact, x+1);
    printf("La minima facturacion fue de $%f, en el mes %d\n", minFact, z+1);


    system("pause");
    return 0;
}