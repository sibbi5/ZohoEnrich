#include<stdio.h>
#include<string.h>
void main()
{
    char word[50],ch;
    int n,i,j=0,k=0;
    ch=getchar();
    while (ch != '\n')
    {
        word[k++]=ch;
        ch=getchar();
    }

    for(i=0;i<k;i++)
    {
        if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' && word[i]!=' ' && word[i]!='A' && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U' )
        {
        word[j]=word[i];
        j++;
        }

    }
    for(i=0;i<j;i++)
        printf("%c",word[i]);

}


