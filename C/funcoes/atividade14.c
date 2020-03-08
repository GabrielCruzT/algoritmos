#include<stdio.h>

void verificar (num);
int main ()
{
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);
    verificar(num);
    return 0;
}

void verificar (num)
{
    int n;
    float i;

        i=sqrt(num);
        n=i;
        if(i<=n)
        {
            printf("O numero e um quadrado perfeito!");
        }
        else
        {
            printf("O numero nao e um quadrado perfeito!");
        }
}
