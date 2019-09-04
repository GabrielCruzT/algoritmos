#include<stdio.h>

int main()
{
    int num=0,i=10;
    printf("Contagem regressiva: \n");
    while(num<10)
    {
        printf("%i\n",i);
        i--;
        num++;
    }
    printf("FIM!\n");
  return 0;
}
