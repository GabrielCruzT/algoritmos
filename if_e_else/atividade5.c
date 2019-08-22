#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Digite tres valores dos lados de um triangulo:");
    scanf("%i%i%i",&a,&b,&c);

    if (a==b && b==c)
    {
        printf("O triangulo e equilatero!");
    }
    else if (a==b || b==c || c==a)
    {
        printf("O triangulo e isósceles!");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf("O triangulo e escaleno!");
    }
}
