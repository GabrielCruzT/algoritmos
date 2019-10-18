#include<stdio.h>
#define n 5
void preenche(int m[n][n]);
void imprime(int m[n][n]);
int main ()
{
    int i,j,m[n][n];
    preenche(m);
    imprime(m);
    return 0;
}

void preenche(int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Digite o numero da linha %i e da coluna %i:",i+1,j+1);
            scanf("%i",&m[i][j]);
        }
    }
}

void imprime(int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%i",m[i][j]);
        }
        printf("\n");
    }
}


