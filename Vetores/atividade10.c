#include<stdio.h>
#define n 11

void impressaoc (int v[n]);
void impressaod (int v[n]);
void decrescente (int v[n]);
void preenche (int v[n]);

int main()
{
    int v[n];
    preenche (v);
    decrescente (v);
    impressaoc (v);
    impressaod (v);
    return 0;
}

void preenche (int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero:");
        scanf("%i",&v[i]);
    }
}

void impressaoc (int v[n])
{
    int i;
    printf("Ordem crescente: \n");
    for (i=0;i<n;i++)
    {
        printf("%i\n",v[i]);
    }
}
void impressaod (int v[n])
{
    int i;
    printf("Ordem decrescente: \n");
    for (i=n;i>0;i--)
    {
        printf("%i\n",v[i]);
    }
}

void decrescente (int v[n])
{
    int i,j,aux;
    for (i=0;i<=n-1;i++)
    {
        for (j=0;j<n-1;j++)
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
