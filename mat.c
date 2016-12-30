#include<stdio.h>
void main()
{
    int n,m,k,i,j;
    scanf("%d%d",&n,&m);
    scanf("%d",&k);
    int mat[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
          scanf("%d",&mat[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i+j != 2)
            {
                mat[i][j]=0;
            }
        }


    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf(" %d ", mat[i][j]);
        }
    printf("\n");
    }

}
