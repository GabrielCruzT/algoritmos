#include<stdio.h>

int main()
{
    int num=0,saida=0,quantidade=0;

    printf("Contando os numeros de 1 a 100 tres vezes!\n");

    while (saida<3)
    {
        num++;
        printf("%i\n",num);
        if(num=100)
        {
            quantidade++;
        }
        else if (quantidade=3)
        {
            saida=1;
        }

    }

   return 0;
}
