#include<stdio.h>

int main()
{
    char frase[50];
    int i,t;

    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);
    t = strlen(frase);

    for(i=0;i<t;i++)
    {
        if(frase[i]==' ')
        {
            frase[i]=frase[i+1];
        }
        printf("%c",frase[i]);
    }
    return 0;
}
