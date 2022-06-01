#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, cantidadNotas;
    float notas, suma, prom;
    suma = 0;

    printf("Ingrese la cantidad de notas a cargar: \n");
    scanf("%d", &cantidadNotas);

    float array[cantidadNotas];

    printf("Ingrese las calificaciones: \n");

    for ( i = 0; i < cantidadNotas; i++)
    {
        scanf("%f", &notas);

        array[i]=notas;
    }

    for ( i = 0; i < cantidadNotas; i++)
    {
        suma = suma + array[i];
    }

    printf("La suma de las notas es: %f\n", suma);

    prom = suma/cantidadNotas;

    printf("El promedio de notas es: %f\n", prom);


    system("pause");
    return 0;
    
    
}