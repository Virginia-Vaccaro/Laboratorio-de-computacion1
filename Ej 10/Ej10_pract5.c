#include<stdlib.h>
#include<stdio.h>

int main()
{
    int y, x, i, z;
    float num, suma, suma1, suma2;

    printf("Ingrese el tamano de la matriz cuadrada:\n");
    scanf("%d", &y);
    scanf("%d", &x);

    float matriz[y][x];

    printf("Ingresar los elementos de la matriz:\n");
    for ( i = 0; i < y; i++)
    {
        for ( z = 0; z < x; z++)
        {
          scanf("%f", &num);
          matriz[i][z]=num;  
        }
    }
    
    printf("La matriz ingresada es:\n");

    for ( i = 0; i < y; i++)
    {
        for ( z = 0; z < x; z++)
        {
          printf("%f",  matriz[i][z]);
        }
        printf(" \n");
    }
    
    suma=0;

    for ( i = 0; i < y; i++)
    {
        for ( z = 0; z < x; z++)
        {
            suma = suma + matriz[i][z];
        }
    } 
    
    suma1=0;
    for ( i = 0; i < y; i++)
    {
        suma1 = suma1 + matriz[i][i];
    }
    
    suma2 = suma - suma1;
    
    printf("La suma de todos los elementos de la matriz menos los de la diagonal principal es:\n");
    printf("%f", suma2);

    system("pause");
    return 0;

}