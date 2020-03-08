#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Digite tres valores inteiros: \n");
    scanf("%i%i%i",&a,&b,&c);

    if(a<b+c && b<a+c && c<a+b)
    {
        if(a==b && b==c && c==a)
        {
            printf("o triangulo e equilatero! a: %0.1i, b: %0.1i, c: %0.1i",a,b,c);
        }
        else if(a==b || b==c || c==a)
        {
            printf("o triangulo e isosceles! a: %0.1i, b: %0.1i, c: %0.1i",a,b,c);
        }
        else if(a!=b && b!=c && c!=a)
        {
            printf("o triangulo e escaleno! a: %0.1i, b: %0.1i, c: %0.1i",a,b,c);
        }
    }
    else
    {
        printf("Nao e possivel formar um triangulo");
    }

    return 0;
}
