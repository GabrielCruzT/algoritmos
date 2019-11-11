#include<stdio.h>

void dobro ()
{
    int num1, num2, num3;
    float t1,t2,t3;
    printf("Digite tres numeros: \n");
    scanf("%i%i%i",&num1,&num2,&num3);
    t1=num1*num1;
    t2=num2*num2;
    t3=num3*num3;
    printf("Dobro dos valores:\n %.2f \n%.2f \n %.2f",t1,t2,t3);
}

int main ()
{
    dobro();

    return 0;
}
