#include<stdio.h>

int main ()
{
    int soma=0,num=0,quant = 0,saida = 0;

    while (saida == 0)
    {
        num = num + 2;
        quant++;
        soma = soma + num;
        printf("%i = %i \n", quant, num);
        if (quant == 50)
            saida = 1;
    }
    printf("Soma: %i", soma);


    return 0;
}
