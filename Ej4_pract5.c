#include<stdlib.h>
#include<stdio.h>

int main()
{
    int array[6] = {10, 20, 5, 15, 30, 20};
    int i;
    int suma=0;
    int mayor =0;
    int contador=0;

    for (i=0; i<=5; i++)
    {
       printf("Indice: %d, Valor: %d\n", i, array[i]);
    }

    for(i=0; i<=5; i++)
    {
        suma = suma + array[i];
    }
    printf("El total es: %d\n", suma);

    
    printf("Contenido de las posiciones impares:\n");
    for(i=1; i<=5; i= i+2)
    {
        printf("En la posicion %d se encuentra: %d\n", i, array[i]);
    }

   
    printf("Las posiciones que contienen numeros impares son:\n");
    for(i=0; i<=5; i++)
    {
        if(array[i]%2!=0)
        {
            printf("%d\n", i);
        }
    }
    
   
    printf("El mayor numero es:\n");
    for(i=0; i<=5; i++)
    {
        
        if (i==0)
        {
            mayor = array[i];
        }
        else
        {
            if (array[i]>mayor)
            {
                mayor=array[i];
            }
        }
    }
    printf("%d\n", mayor);

    
    for(i=0; i<=5; i++)
    {
        if(array[i]==20)
        {
            contador++;
        }
    }
    printf("El numero 20 aparece en el arreglo %d veces\n", contador);


 
 system("pause");
 return 0;

}