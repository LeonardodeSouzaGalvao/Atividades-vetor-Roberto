#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int vet[15], vet2[15], c, b, somadosnumeros = 0;

    srand(time(0));
    for(int i=0; i!=15; i++)
    {
        int numeroaleatorio = (rand()% (50 - 15 + 1))+ 15;
        vet[i]= numeroaleatorio;
        printf("numero na posicão %i = %i\n",i, vet[i]);
        c = numeroaleatorio;
        for(b=0;b!=c;b++){
            somadosnumeros = somadosnumeros +b;
        }
            vet2[i] = somadosnumeros;
            printf("soma de 1 até o numero = %i\n", vet2[i]);
    }


    return 0;
}
