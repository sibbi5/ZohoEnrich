#include<stdio.h>
#include<string.h>
void main()
{
    int p=0,i,j,n;
    int count=0;
    char arr[30],ch;
    ch=getchar();
    while(ch!='\n')
    {
        arr[p++]=ch;
        ch=getchar();
    }
    j=p-1;
    for(i=0;i<p;i++)
    {
        if(arr[i] == arr[j])
        {
           count=1;

        }
        else
        {
            count=0;
        }
        j--;

    }
    if(count == 1)
    {
        printf("Given string is palindrome");
    }
    else
    {

        printf("Given string is not a palindrome");
    }
}
