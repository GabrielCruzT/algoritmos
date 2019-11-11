#include<stdio.h>
#define n 5
void preenche(int m[n][n]);
void imprime (int m[n][n]);
int main()
{
    int m[n][n];
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
            if (i==j)
            {
               m[i][j]=5;
            }
            if (i-j>0)
            {
                m[i][j]=1;
            }
            if (i-j<0)
            {
                m[i][j]=0;
            }
        }
    }
}

void imprime(int m[n][n])
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%i",m[i][j]);
        }
        printf("\n");
    }
}
