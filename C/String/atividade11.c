#include<stdio.h>

int main()
{
    char palavra[20],letra;
    int i,c=0,t;
    printf("Digite uma palavra: ");
    fgets(palavra,sizeof(palavra),stdin);
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    t = strlen(palavra);
    for (i=t-1;i>=0;i--)
    {
        if(palavra[i]== 'a' || palavra[i]== 'e' || palavra[i]== 'i' || palavra[i]== 'o' || palavra[i]== 'u')
        {
            c++;
            palavra[i]=letra;
            printf("%c",palavra[i]);
        }

    }
    printf("\n");
    printf("%i vogais \n",c);

    return 0;
}
