#include<stdio.h>

int main()
{
    float a,quadrado,raiz;

    printf("Digite um numero: ");
    scanf("%f",&a);

    if(a>=0)
    {
        quadrado=a*a;
        raiz=sqrt(a);
        printf("O numero ao quadrado e a sua raiz sao: %.2f e %.2f",quadrado,raiz);
    }
    else
    {
        printf("Numero negativo nao tem raiz quadrada!");
    }
    return 0;
}
