#include<stdio.h>

int main()
{
    int num=0,saida=0,quantidade=0;

    printf("Contando os numeros de 1 a 100 tres vezes!\n");

    while (saida==0)
    {
        num++;
        quantidade ++;
        printf("%i\n",num);
        if (quantidade == 100)
        {
            saida = 2;
        }

    }

   return 0;
}
