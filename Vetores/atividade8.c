#include<stdio.h>
#define n 5
void media (float v[n]);
void preencher(float v[n]);
int main ()
{
    float v[n];
    preencher (v);
    media (v);
    return 0;
}

void preencher (float v[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Digite a nota do aluno %i: ",i+1);
        scanf("%f",&v[i]);
    }
}

void media (float v[n])
{
    int i;
    float total=0,m;
    for (i=0;i<n;i++)
    {
        total+=v[i];
    }
    m = total/n;
    printf("%.2f",m);
}
