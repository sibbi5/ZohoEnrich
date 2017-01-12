#include <stdio.h>

int main(void) 
{
	int num,temp,j,k,i=0;
	int arr[10];
	scanf("%d",&num);
	while(num != 0)
	{
	    temp=num%10;
	    arr[i++]=temp;
	    num=num/10;
	}
	
	k=i-1;
	for(j=0;j<i;j++)
	{
	    if(arr[j] != arr[k])
	    {
	        arr[j]=arr[k];
	        
	    }
	    k-=1;
	} 
	for(j=0;j<i;j++)
	{
	    printf("%d", arr[j]);
	}
	
	return 0;
}

