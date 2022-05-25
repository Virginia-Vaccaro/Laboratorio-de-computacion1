#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[5];
    int i;
    int contador;
    contador=0; 

    printf ("Ingrese cada elemento del arreglo:\n ");
    for(i=0; i<=4; i++)
    {
         scanf("%d", &array[i]);
         if(array[i]==5)
         {
             contador++;
         }
    }

    printf("En el arreglo, el numero 5 aparece %d veces\n", contador);

system("pause");
return 0;  
    
}