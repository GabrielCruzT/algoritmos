#include<stdio.h>

int main()
{
    int num=0,i,soma=0;

    for(i=0; i<1000; i++)
    {
        if(i%3==0 || i%5==0)
        {
            soma=soma+i;
            printf("%i = %i \n", soma, i);
        }
    }
    printf("Soma: %i", soma);

    return 0;
}
