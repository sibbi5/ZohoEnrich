#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50], size,i,max=0,min=0;
	
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			if(max<arr[i])
		 	{
				min=max;
				max=arr[i];
			}
			else if(arr[i]>min)
			{
				min=arr[i];
			}
		}
	}
	printf("\n%d", min);
}
