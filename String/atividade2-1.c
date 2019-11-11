#include<stdio.h>
#include<string.h>
int main ()
{
    char string1[15];
    char string2[15]="Campus";
    int i=0,t;
    printf("Digite uma palavra: \n");
    fgets(string1,sizeof(string1),stdin);
    t=strlen(string2); // descobre o tamanho da string
    while (string1[i]!='\0')
    {
        string2[t]=string1[i];
        t++;
        i++;
    }
    string2[t]='\0';
    printf("%s\n",string2);
}
