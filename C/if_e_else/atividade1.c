#include<stdio.h>

int main()
{
    float a, b;
    printf("Digite dois numeros:\n");
    scanf("%f%f",&a,&b);

    if(a>b)
    {
        printf("O primeiro numero e maior");
    }
    else if (b>a)
    {
        printf("O segundo numero e maior");
    }
    else
    {
        printf("Os valores sao iguais");
    }
    return 0;
}

