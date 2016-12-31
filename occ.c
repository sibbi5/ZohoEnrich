#include<stdio.h>
int occ(int num[],int,int);
void main()
{
	int i,size,value;
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&value);
	occ(arr,value,size);
}
int occ(int num[],int val,int siz)
{
	int j,count=0;
	for(j=0;j<siz;j++)
	{
		if(num[j] == val)
		{
			count++;
		}
	}
	printf("%d",count);
}

	
