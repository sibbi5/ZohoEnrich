#include<stdio.h>
void main()
{
    int num,n,set,sum=0;
    int arr[20];
    int i=0,s,k,j;
    scanf("%d", &num);
    while(num != 0)
    {
        n=num%10;
        arr[i++]=n;
        num=num/10;

    }
    s=i;
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(arr[j] > arr[k] )
            {
                set=arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= set;
            }
        }



}
    for(j=0;j<s;j++)
    {
        sum=sum*10+arr[j];
    }

    printf("%d", sum);
}
