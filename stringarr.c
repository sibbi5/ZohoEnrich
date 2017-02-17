#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,j,size1,size2;
	scanf("%d", &n);
	char** num;
	num=(char**)malloc(n*sizeof(char*));
	for(i=0;i<10;i++)
	{
		num[i]=(char*)malloc(10*sizeof(char));
	}
    char* temp;
	for(i=0;i<n;i++)
	{
		scanf("%s", num[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    
	    for(j=i+1;j<n;j++)
	    {
	        size1=strlen(num[i]);
	        size2=strlen(num[j]);
	        if(size1 > size2)
	        {
	            temp=num[i];
	            num[i]=num[j];
	            num[j]=temp;
	        }
	        else if(size1==size2 && strcmp(num[i],num[j])>0)
	        {
	            temp=num[i];
	            num[i]=num[j];
	            num[j]=temp;
	        }
	    }
	}

	for(i=0;i<n;i++)
	{
	    printf(" %s ", num[i]);
	}
}
	    
