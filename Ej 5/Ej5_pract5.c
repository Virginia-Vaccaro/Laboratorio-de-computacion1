#include<stdio.h>
#include<stdlib.h>

int main()
{
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};

    int i, x, z;
    float infAnual, mayor, menor;
    infAnual=0;

   
    for(i=0; i<12; i++)
    {
        infAnual = infAnual + inflacion[i];
    }
    printf("La inflacion anual es: %f\n", infAnual/12);

    
    for(i=0; i<12; i++)
    {
        if(i==0)
        {
            mayor= inflacion[i];
            menor= inflacion[i];
        }
        else
        {
            if(mayor<inflacion[i])
            {
                mayor=inflacion[i];
                x=i;
            }
            else
            {
                if(menor>inflacion[i])
                {
                    menor=inflacion[i];
                    z=i;
                }
            }
        }
    }
    printf("La inflacion mas baja se dio en el mes %d, y fue de %f\n", z+1, menor);
    printf("La inflacion mas alta se dio en el mes %d, y fue de %f\n", x+1, mayor);


    system("pause");
    return 0;
}