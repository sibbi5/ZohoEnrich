#include<stdio.h>
#include<stdlib.h>
int spiral(int** num,int size, int n,int m,int diff,int v)
{
	int i;
	for(i=0;i<size;i++)
	{
		num[n][m++]=v;
		v=v+diff;
		
	}
	return 0;
}
void main()
{
	int i,j=0,row,col;
	scanf("%d%d",&row,&col);
	int **arr=(int**)malloc(sizeof(int*)*row);
	int d=1,val=1;
	for(i=0;i<row;i++)
	{	
		arr[i]=(int*)malloc(sizeof(int)*col);
		spiral(arr,col,i,j,d,val);
		d=d*-1;
		val=arr[i][3]+4;
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
