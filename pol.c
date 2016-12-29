#include<stdio.h>
void main()
{
    int num1,num,n,sum=0;
    int i=0;
    scanf("%d", &num);
    num1 = num;
    while(num!=0)
    {
        n=num%10;
        sum=(sum*10)+n;
        num=num/10;

    }
    if(num1 == sum)
    {
        printf("Given number is palindrome");
    }
    else
    {        printf("Given number is not palindrome");

    }
}
