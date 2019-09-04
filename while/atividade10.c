#include<stdio.h>

int main()
{
    int num=0,divisor=1,calculo;
    int encontrado = 0;
    int div = 20;
    printf("menor numero divisivel por cada um dos numeros de 1 a %i e:\n ", div);


    while ( encontrado < div )
    {
        num++;
        printf("Numero atual: %i\n", num);

        divisor = 1;
        encontrado = 0;
        while (divisor <= div)
        {
            calculo = num%divisor;
            if (calculo == 0)
                encontrado++;
            divisor++;
        }
        printf("Divisores: %i\n", encontrado);


    }

    printf("Numero encontado: %i", num--);
    return 0;
}
