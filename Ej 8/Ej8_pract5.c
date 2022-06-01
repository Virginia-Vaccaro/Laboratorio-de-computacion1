#include<stdlib.h>
#include<stdio.h>

int main()
{
    float array1[5], array2[5], array3[10];
    int i;
    float num;

    printf("Ingrese 10 numeros:\n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%f", &num);
        array1[i]=num;
    }
    for ( i = 0; i < 5; i++)
    {
        scanf("%f", &num);
        array2[i]=num;
    }
    
    for ( i = 0; i < 5; i++)
    {
        array3[i]=array1[i];
    }
    for ( i = 0; i < 5; i++)
    {
        array3[i+4]=array2[i];
    }
    
    printf("El arreglo es:\n");

    for ( i = 0; i < 9; i++)
    {
        printf("%f\n", array3[i]);
    }
    

    system("pasue");
    return 0;
    
    

}