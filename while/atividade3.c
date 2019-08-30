#include<stdio.h>

int main()
{
    int num,i=0,impar=1;

    printf("Digite um numero:");
    scanf("%i",&num);

    while (i<num)
    {
        i=i+1;
        impar=impar+2;
        printf("%i\n",impar);

    }

    return 0;
}
