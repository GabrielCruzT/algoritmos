#include<stdio.h>

int main()
{
    int num=6,quant=0,i,j;
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
            quant++;
            printf("%i  ",quant);
        }
        printf("\n");
    }
    return 0;
}
