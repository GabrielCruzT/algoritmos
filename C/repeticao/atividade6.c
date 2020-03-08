#include<stdio.h>

int main()
{
    int num=100,i,total1=0,total2=0;

    for(i=0;i<10;i++)
    {
       total1 += i*i;
       total2 += i;
       if (i==num)
        total1=total2*total2;
    }
    printf("A soma dos quadrados: %i \n");
    printf("O quadrado da soma: %i \n");
    printf("A diferenca: %i\n",total1-total2);
    return 0;
}
