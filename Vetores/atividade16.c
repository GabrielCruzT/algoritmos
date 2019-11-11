#include<stdio.h>
#define n 10
void preenche (int v[]);
void ordena (int v[]);
void imprime (int v[]);
int main ()
{
    int v[n];
    preenche(v);
    ordena(v);
    imprime(v);
    return 0;
}

void preenche(int v[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um valor: ");
        scanf("%i",&v[i]);
    }
}

void ordena(int v[])
{
    int i,j, aux;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (v[j]>v[j+1])
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void imprime(int v[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%i ",v[i]);
    }
}
