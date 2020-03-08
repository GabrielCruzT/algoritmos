#include<stdio.h>
#define n 10
void preenche(int v[n]);
void repeticao(int v[n]);
int main()
{
    int v[n];
    preenche(v);
    repeticao(v);
    return 0;
}

void preenche(int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero:");
        scanf("%i",&v[i]);
    }
}

void repeticao(int v[n])
{
    int i,j,aux;
    printf("Valores iguais\n");
    for (j=0;j<n;j++)
    {
        for (i=0;i<n-1;i++)
        {
            if (v[i]==v[i+1])
            {
                printf("%i\n",v[i]);
            }
        }
    }
}
