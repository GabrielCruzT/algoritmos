#include<stdio.h>
#define n 6
void preenche (int v[n]);
void pares (int v[n]);
void soma (int v[n]);
void impares (int v[n]);

int main()
{
    int v[n];
    preenche(v);
    pares(v);
    soma(v);
    impares(v);
    return 0;
}

void preenche(int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%i",&v[i]);
    }
}

void pares(int v[n])
{
    int i;
    printf("Numeros pares digitados: \n");
    for (i=0;i<n;i++)
    {
        if (v[i]%2==0)
        {
            printf("%i\n",v[i]);
        }
    }
}
void impares(int v[n])
{
    int i;
    printf("Numeros impares digitados: \n");
    for (i=0;i<n;i++)
    {
        if (v[i]%2!=0)
        {
            printf("%i\n",v[i]);
        }
    }
}

void soma(int v[n])
{
    int i,totalp=0,totali=0;
    for (i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            totalp = totalp+v[i];
        }
        if (v[i]%2!=0)
        {
            totali = totali+v[i];
        }
    }
    printf("A soma dos numeros pares e: %i\n",totalp);
    printf("A soma dos numeros impares e: %i\n",totali);
}
