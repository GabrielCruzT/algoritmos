#include<stdio.h>
#define n 3
void matrizA (int A[n][n]);
void matrizB (int B[n][n]);
void matrizC (int C[n][n],int A[n][n],int B[n][n]);
int main()
{
    int A[n][n],B[n][n],C[n][n],i,j;
    matrizA (A);
    matrizB (B);
    matrizC (C,A,B);
    return 0;
}

void matrizA (int A[n][n])
{
    int i,j;
    printf("Matriz A \n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Digite o elemento da linha %i e coluna %i: ",i+1,j+1);
            scanf("%i",&A[i][j]);
        }
    }
}

void matrizB (int B[n][n])
{
    int i,j;
    printf("MatrizB \n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Digite o elemento da linha %i e coluna %i: ",i+1,j+1);
            scanf("%i",&B[i][j]);
        }
    }
}

void matrizC (int C[n][n],int A[n][n],int B[n][n])
{
    int i,j;
    printf("Matriz C \n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("Subtracao dos vetores A e B\n");
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("C[%i][%i]%i\n",i+1,j+1,C[i][j]);
        }
    }
}
