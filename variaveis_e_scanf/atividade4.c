#include<stdio.h>

int main()
{
    float real,dolar,soma;
    dolar=3.5;

    printf("Cotacao do dolar: $3.50 \n");
    printf("Digite o valor em reais: ");
    scanf("%f",&real);

    soma=real/dolar;

    printf("Valor convertido em dolar: %0.2f",soma);

    return 0;
}

