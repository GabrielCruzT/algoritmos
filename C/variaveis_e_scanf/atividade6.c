#include<stdio.h>

int main ()
{
    float raio,volume,altura;

    printf("Digite o raio do circulo: ");
    scanf("%f",& raio);
    printf("Digite a altura do circulo: ");
    scanf("%f", & altura);

    volume = 3.141592*raio*raio*altura;

    printf("O volume do circulo e: %0.2f",volume);

    return 0;
}
