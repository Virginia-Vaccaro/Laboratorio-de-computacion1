#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[5]={13,15,17,19,21};
    int suma;
    suma=0;
    int i;

    for (i=0; i<=4; i++ )
    {
       suma = suma + array[i];
    }

    printf("La suma de las componentes del arreglo es %d\n", suma);
    printf("El promedio es %d\n", suma/5);

system("pause");
return 0;
}