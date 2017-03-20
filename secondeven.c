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
	if(max==0)
	{
		printf("No even number in the array");
	}
	else if(min == 0)
	{
		printf("only one even number is present in the array %d", max);
	}
	else
	{
	printf("\n%d", min);
	}
}
