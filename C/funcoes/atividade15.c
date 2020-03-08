#include<stdio.h>
float volume(float r);

int main()
{
    float r;
    printf("Digite o raio da esfera: ");
    scanf("%f",&r);
    printf("O valor do volume da esfera e = %.2f",volume(r));
    return 0;
}

float volume (float r)
{
    float v;
    v=1.3333*(r*r*r)*3.14;
    printf("%.2f\n",v);
    return v;
}
