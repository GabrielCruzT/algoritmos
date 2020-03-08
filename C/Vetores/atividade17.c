#include<stdio.h>
#define t 10
void imprimeVet(int v[]);
int verificaVet(int ind,int v[],int elem);

int main()
{
    int v[t] = {1,2,3,4,1,6,7,8,9,10};
    imprimeVet(v);


    return 0;
}

void imprimeVet(int v[])
{
    int i;
    for(i=0;i<t;i++)
    {
        if(verificaVet(i,v,v[i])==0)
        {
            printf("%i ",v[i]);
        }
    }
}
int verificaVet(int ind,int v[],int elem)
{
    int i;
    for(i=0;i<ind;i++)
    {
        if(elem == v[i])
        {
            return 1;
        }
    }
    return 0;
}
