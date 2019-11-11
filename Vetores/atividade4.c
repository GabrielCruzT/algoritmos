#include<stdio.h>
#define n 10
void preencher (int v[]);
void imprime (int v[]);
int main ()
{
    int v[n];
    preencher(v);
    imprime(v);
    return 0;
}

void preencher (int v[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero: \n");
        scanf("%i",&v[i]);
    }
}

void imprime(int v[])
{
    int i,c=0;
    printf("Os numeros pares sao:\n");
    for (i=0;i<n;i++)
    {
        if (v[i]%2==0)
        {
            printf("%i\n",v[i]);
            c++;
        }
    }
    printf("A quantidade de numeros pares e: %i\n",c);
}
