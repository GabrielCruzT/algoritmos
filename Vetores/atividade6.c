#include<stdio.h>
#define n 5
void preenche(int v[]);
void maior(int v[]);
void media (int v[]);
int main()
{
    int v[n];
    preenche(v);
    maior(v);
    media(v);
    return 0;
}

void preenche(int v[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero: \n");
        scanf("%i",&v[i]);
    }
}

void maior(int v[])
{
    int i,maiorv=0,menorv;
    for (i=0;i<n;i++)
    {
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

void media(int v[])
{
    int i;
    float total,soma=0;

    for (i=0;i<n;i++)
    {
       soma= soma+v[i];
    }
    total=soma/n;
    printf("O valor da media dos numeros e: %.2f\n",total);
}
