#include<stdio.h>
#define n 5
void preenche(int v[]);
void posicao(int v[]);
int main()
{
    int v[n];
    preenche(v);
    posicao(v);
    return 0;
}

void preenche(int v[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um valor: \n");
        scanf("%i",&v[i]);
    }
}

void posicao(int v[])
{
    int i,maiorv=0,menorv;
    for (i=0;i<n;i++)
    {
        printf("Vetor %i : %i\n",i,v[i]);
        if (v[i]>maiorv)
        {
            maiorv = v[i];
        }
        else if (v[i]<menorv)
        {
            menorv = v[i];
        }
    }
    printf("O maior valor e: %i\n",maiorv);
    printf("O menor valor e: %i\n",menorv);
}

