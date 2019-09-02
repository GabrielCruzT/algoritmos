#include<stdio.h>

int main()
{
    int num,i,quant=1;
    printf("Os 5 primeiros multiplos de 3: \n");

    for(i=0;i<=4;i++)
    {
        num=3*quant;
        printf("%i\n",num);
        quant++;
    }
   return 0;
}
