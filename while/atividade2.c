#include<stdio.h>

int main ()
{
    int num,n1=0,n2=1,n3;
    printf("Digite um numero: \n");
    scanf("%i",&num);

    if (num<0)
    {
        printf("Numero invalido!");

    }
    else
    {
        printf("0\n1\n");
        while (n2<=num)
        {
            n3=n2+n1;
            printf("%i\n",n3);
            n1=n2;
            n2=n3;

        }
    }

  return 0;
}
