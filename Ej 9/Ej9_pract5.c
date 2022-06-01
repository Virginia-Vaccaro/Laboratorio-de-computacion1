#include<stdio.h>
#include<stdlib.h>

int main()
{
    float array1[5], array2[5], num;
    int i;

    printf("Ingrese 5 numeros:\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%f", &num);
        array1[i]=num;
    }

    for ( i = 0; i < 5; i++)
    {
        array2[i]=array1[i]*2;
    }

    printf("El doble del array ingresado es:\n");

    for ( i = 0; i < 5; i++)
    {
        printf("%f\n", array2[i]);
    }
    

    system("pause");
    return 0;
    
}