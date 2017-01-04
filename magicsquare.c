#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j,size;
    int *a;
    scanf("%d",&n);
    size=n*n;
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mat[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=0;
        }
    }
    a=&arr[0];
    i=0;
    j=n/2;
    while(size != 0)
    {
        if(i<0)
        {
            i=n-1;
        }
        if(j>n-1)
        {
            j=0;
        }
        if(mat[i][j] == 0)
        {
            mat[i][j]= *a;
        }
        else
        {
            i=i+2;
            j=j-1;
            if(i>n-1)
            {
                i=i-n;
                j=j+n;
            }
            mat[i][j]= *a;
        }
        i=i-1;
        j=j+1;
        size=size-1;
        a=a+1;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

}
