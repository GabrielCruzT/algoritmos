#include<stdio.h>
#define n 6
void inverso (int v[]);
void preenche(int v[]);
int main()
{
    int v[n];
    preenche(v);
    inverso(v);
    return 0;
}

void preenche(int v[])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um numero: \n");
        scanf("%i",&v[i]);
        if (v[i]%2!=0)
        {
            printf("Digite somente numeros pares!\n");
            i--;
        }
    }
}



void inverso(int v[])
{
    int i;
    for(i=n;i>0;i--)
    {
        printf ("%i\n",v[i]);
    }
}
