#include<stdio.h>
#include<string.h>

int main()
{
    char string [20];
    char string1 [20];
    int i;
    printf("Digite uma palavra: ");
    scanf("%s",string);
    for (i=0;i<4;i++)
    {
        string1[i]=string[i];
    }
    string1[i]='\0';
    printf("%s",string1);
}
