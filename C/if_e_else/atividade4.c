#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Digite tres numeros inteiros e diferentes: ");
    scanf("%i%i%i",&a,&b,&c);

    if (c>a)
    {
        if (a>b)
        {
           printf("A sequencia de numeros crescente e: %i%i%i",b,a,c);
        }
        else if (b<c)
        {
            printf("A sequencia de numeros crescente e: %i%i%i",a,b,c);
        }
    }
    if(a>b)
    {
        if(b>c)
        {
            printf("A sequencia de numeros crescente e: %i,%i,%i",c,b,a);
        }
        else if (c<a)
        {
            printf("A sequencia de numeros crescente e: %i,%i,%i",b,c,a);
        }
    }
    if(a<b)
    {
        if(c<a)
        {
            printf("A sequencia de numeros crescente e: %i,%i,%i",c,a,b);
        }
        else if (c<b)
        {
            printf("A sequencia de numeros crescente e: %i,%i,%i",a,c,b);
        }
    }

    return 0;
}
