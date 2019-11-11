#include<stdio.h>
#define n 10
void preenche (int v[n]);
void primos (int v[n]);

int main()
{
    int v[n];
    preenche(v);
    primos(v);
    return 0;
}

void preenche(int v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite um valor para v[%i]: ",i+1);
        scanf("%i",&v[i]);
    }
}

void primos(int v[n])
{
    int i,cont=0;
    printf("Vetores Primos: \n");
    for (i=0;i<n;i++)
    {
        if (v[i]== 2)
        {
            printf("V[%i] = %i\n",i,v[i]);
        }
        if (v[i]%2!=0 && v[i]%3!=0 && v[i]%5!=0)
        {
            printf("V[%i] = %i\n",i+1,v[i]);
        }
    }

}

