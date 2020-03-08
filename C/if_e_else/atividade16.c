#include<stdio.h>

int main ()
{
    float a,b;

    printf("Digite dois numeros: \n");
    scanf("%f%f",&a,&b);

    if (a>b)
    {
        printf("O numero %.2f e maior do que %.2f",a,b);
    }
    else if(a<b)
    {
       printf("O numero %.2f e maior do que %.2f",b,a);
    }
    else
    {
        printf("Os numeros sao iguais!");
    }
    return 0;
}
