#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int numero_aleatorio, numeros_por_generar;
    time_t t;


    srand((unsigned) time(&t));


    numero_aleatorio =  rand() % 15 + 5;


    printf("Generando %2d numeros\n", numero_aleatorio);


    for (int i = 0; i < numero_aleatorio; ++i)
    {
        numeros_por_generar = rand () % 30 + 1;
       
        printf("\n%2d \t", numeros_por_generar);
       
        for (int j = 0; j < numeros_por_generar; ++j)
        {
            printf("$");
        }
    }
    return 0;
}
