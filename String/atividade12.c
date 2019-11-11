#include<stdio.h>

int main()
{
    char frase[90];
    int i,c=0;
    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    for(i=0;i<strlen(frase);i++)
    {
        if(frase[i]==' ')
        {
            c++;

        }
    }
    printf("%i",c);
}
