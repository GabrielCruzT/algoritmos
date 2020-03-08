#include<stdio.h>
#define n 4
void preenche (int m[n][n]);
void imprime (int m[n][n]);
int main ()
{
    int i,j,m[n][n];
    preenche(m);
    imprime (m);
    return 0;
}

void preenche (int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Digite o numero da linha %i e coluna %i:",i+1,j+1);
            scanf("%i",&m[i][j]);
        }
    }
}

void imprime (int m[n][n])
{
    int i,j,cont=0;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (m[i][j]>10)
            {
                cont++;
            }
        }
    }
    printf("A quantidade de valores maiores que 10 e: %i",cont);
}
