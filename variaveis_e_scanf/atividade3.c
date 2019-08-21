#include<stdio.h>

int main()
{
    float a,b,c,soma;


    printf("Digite o valor de A: ");
    scanf("%f", & a);
    printf("Digite o valor de B: ");
    scanf("%f", & b);
    printf("Digite i valor de C: ");
    scanf("%f", & c);
    soma = a * a + b * b + c * c;
    printf("A soma dos quadrados dos numeros e: %.02f",soma);
}
