#include<stdio.h>

int main()
{
    int num=0, soma=0, quant=0,saida=0;

    while (saida == 0)
    {
        printf("Digite um numero: ");
        scanf("%i",&num);
        quant++;
        soma = soma + num;
        printf("%i = %i \n", quant, soma);
        if (quant == 10)
            saida = 1;
    }
    printf("Soma: %i", soma);
    return 0;
}
