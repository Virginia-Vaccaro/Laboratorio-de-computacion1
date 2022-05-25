#include<stdlib.h>
#include<stdio.h>

int main()
{
    int array[5], i;
    
    printf("Ingresar los elementos del arreglo:\n");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("El arreglo es:\n");
    for(i=0; i<=4; i++)
    {
        printf("Indice: %d. Valor: %d\n", i, array[i]);
    }
    printf("El arreglo, de atras hacia adelante, es:\n");
    for(i=4; i>=0; i--)
    {
        printf("Indice: %d. Valor: %d\n", i, array[i]);
    }


    system("pause");
    return 0;


}