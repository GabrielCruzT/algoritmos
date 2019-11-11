#include<stdio.h>
#define d 6
void repeticao(int v[d]);
void impressao(int v[d]);
int main ()
{
    int aux,v[d]= {3,10,1,7,8,11};
    repeticao(v);
    impressao(v);
    return 0;
}

void repeticao (int v[d])
{
    int i,j,aux;
     for (j=0;j<=d-1;j++)
    {
        for(i=0;i<d-1;i++)
        {
            if (v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
            }
        }
    }
}

void impressao (int v[d])
{
    int i;
    for(i=0;i<=5;i++)
    {
        printf ("%i\n",v[i]);
    }
}
