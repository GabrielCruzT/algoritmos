#include<stdio.h>
#define n 10
void preenche (int v[]);
void calcula (int v[],int a[],int b[]);
void imprime(int vet[]);

int main ()
{
    int v[n],a[]={0,0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0,0};
    preenche (v);
    calcula (v,a,b);
    imprime(v);
    printf("\n");
    imprime(a);
    printf("\n");
    imprime(b);
    return 0;
}

void preenche (int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um valor: ");
        scanf("%i",&v[i]);
    }
}

void calcula (int v[], int a[], int b[])
{
    int i,impar=0,par=0;
    for (i=0;i<n;i++)
    {
        if (v[i]%2!=0 )
        {
            a[impar]=v[i];
            impar++;

        }
        else
        {
            b[par]=v[i];
            par++;
        }

    }

}

void imprime (int vet[])
{
    int i;
    for (i=0;i<n;i++)
        {
            printf("%i ",vet[i]);
        }
}

