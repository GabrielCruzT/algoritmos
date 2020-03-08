#include<stdio.h>

int main()
{
    int numero,u,d,c,soma;

    printf("Digite im numero de 3 digitos: ");
    scanf("%i",&numero);

    c=numero/100;
    numero=numero%100;
    d=numero/10;
    u=numero%10;

    soma=c+d+u;

    if(numero<=0)
    {
        printf("Sem resultados");
    }
    else
    {
        printf("a soma dos algarismos do numero e: %i",soma);
    }

    return 0;
}

