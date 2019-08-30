#include<stdio.h>

int main ()
{
    int a,b,c,delta;
    float x1,x2;

    printf("Digite os valores de A, B e C: \n");
    scanf("%i%i%i",&a,&b,&c);

    delta=(b*b)-(4*a*c);

    if (delta>=0)
    {
        x1=(-(b)+sqrt(delta))/(2*a);
        x2=(-(b)-sqrt(delta))/(2*a);

        printf("Os valores das raizes sao x1: %.2f; x2: %.2f",x1,x2);
    }
    else
    {
        printf("Nao existe raiz de numero negativo!");
    }

    return 0;
}
