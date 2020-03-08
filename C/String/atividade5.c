#include<stdio.h>
#include<string.h>

int main()
{
    char string1 [20];
    char string2 [20];
    int i,t=0;
    printf("Digite a primeira palavra: ");
    scanf("%s",string1);
    printf("Digite a segunda palavra: ");
    scanf("%s",string2);
    for (i=0;i<strlen(string1);i++)
    {
        if (string1[i]==string2[i])
        {
            t++;
        }
    }
    if (t==strlen(string1))
    {
        printf("Palavras iguais");
    }
    else
    {
        printf("Palavras diferentes");
    }
}
