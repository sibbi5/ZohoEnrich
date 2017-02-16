#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,j,k=0,size,size1,size2;
	scanf("%d", &n);
	char** num;
	num=(char**)malloc(10*sizeof(char*));
	for(i=0;i<10;i++)
	{
		num[i]=(char*)malloc(10*sizeof(char));
	}
    char* temp;
	for(i=0;i<n;i++)
		scanf("%s", num[i]);
	for(i=0;i<n-1;i++)
	{
		temp=num[i];
		for(j=i+1;j<n;j++)
		{
			if(strcmp(temp,num[j])>0)
			{
				temp=num[j];
			}
			
		}
		
	num[k++]=temp;	
	}		
	for(i=0;i<n;i++)
	{
		printf("%s", num[i]);
		printf(" \t ");
	}
	
}
