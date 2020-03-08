#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Digite tres numeros inteiros: \n");
    scanf("%i%i%i",&a,&b,&c);

    if (a>b)
    {
        if(b>c)
        {
            printf("A sequencia de numeros decrescente e: %i,%i,%i",a,b,c);
        }
        else if (c<a)
        {
            printf("A sequencia de numeros decrescente e: %i,%i,%i",a,c,b);
        }
    }
    if (b>a)
    {
        if(a>c)
        {
            printf("A sequencia de numeros decrescente e: %i,%i,%i",b,a,c);
        }
        else if(b>c)
        {
            printf("A sequencia de numeros decrescente e: %i,%i,%i",b,c,a);
        }
    }
    if(c>a)
    {
        if(a>b)
        {
           printf("A sequencia de numeros decrescente e: %i,%i,%i",c,a,b);
        }
        else if(c>b)
        {
            printf("A sequencia de numeros decrescente e: %i,%i,%i",c,b,a);
        }
    }
    return 0;
}
