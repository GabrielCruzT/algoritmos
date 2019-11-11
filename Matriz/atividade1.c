#include<stdio.h>
#define n 4
void preenche (int v[n][n]);
void imprime (int v[n][n]);
int main ()
{
    int v[n][n],i,j;
    preenche(v);
    imprime(v);
    return 0;
}

void preenche(int v[n][n])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Digite o elemento da linha %i e coluna %i\n",i+1,j+1);
            scanf("%i",&v[i][j]);
        }
    }
}
void imprime (int v[n][n])
{
    int i,j,maior=0,maiori=0,maiorj=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[i][j]>maior)
            {
                maior=v[i][j];
                maiori=i;
                maiorj=j;
            }
        }
        printf("\n");
    }
    printf("A localiuzacao do maior valor e linha %i e coluna %i e o valor e %i ",maiori+1,maiorj+1,maior);
}
