#include<stdio.h>
void main()
{
	
	int arr[4][4];
	int k=1,i,j,l,m,temp;
	char charec;
	for(i=0;i<4;i++)
	{
		printf("----------------------\n|");
		for(j=0;j<4;j++)
		{
			arr[i][j]=k;
			if(i==2&&j==2)
			{
				arr[i][j]=' ';
				printf(" %c |", arr[i][j]);
			}
			else
			{
			printf(" %d |",arr[i][j]);
			}
			k++;
		}
		printf("\n");
	}
	printf("----------------------");
	i=2;j=2;
	printf("\n U->Up D->Down L->Left R->Right Q->Quit\n");
	printf("Enter a charecter\n");
		
	while(charec != 'Q')
	{
		scanf("%c", &charec);
		switch(charec)
		{
			case 'L':temp=arr[i][j]; 
					arr[i][j]=arr[i][j-1];
					arr[i][j-1]=temp;
					  j--;
					  for(l=0;l<4;l++)
						{
							printf("----------------------\n|");
							for(m=0;m<4;m++)
							{
								if(arr[l][m]==' ')
								{
								 printf(" %c |",arr[l][m]);
								}
								else
								{
								 printf(" %d |",arr[l][m]);
								}
							}
							printf("\n");
						}
						printf("----------------------\n");	
					 break;	
			case 'R': temp=arr[i][j]; 
			 arr[i][j]=arr[i][j+1];
			 arr[i][j+1]=temp;
					 j++;
					 for(l=0;l<4;l++)
						{
							printf("----------------------\n|");
							for(m=0;m<4;m++)
							{
								if(arr[l][m]==' ')
								{
								 printf(" %c |",arr[l][m]);
								}
								else
								{
								 printf(" %d |",arr[l][m]);
								}
							}
							printf("\n");
						}
						printf("----------------------\n");
					 break;
			case 'U': temp=arr[i][j]; 
			arr[i][j]=arr[i-1][j];
			arr[i-1][j]=temp;
					  i--;
					  	for(l=0;l<4;l++)
						{
							printf("----------------------\n|");
							for(m=0;m<4;m++)
							{
								if(arr[l][m]==' ')
								{
								 printf(" %c |",arr[l][m]);
								}
								else
								{
								 printf(" %d |",arr[l][m]);
								}
							}
							printf("\n");
						}
						printf("----------------------\n");
					 break;
			case 'D': temp=arr[i][j]; 
			 arr[i][j]=arr[i+1][j];
			 arr[i+1][j]=temp;
					  i++;
					  for(l=0;l<4;l++)
						{
							printf("----------------------\n|");
							for(m=0;m<4;m++)
							{
								if(arr[l][m]==' ')
								{
								 printf(" %c |",arr[l][m]);
								}
								else
								{
								 printf(" %d |",arr[l][m]);
								}
							}
							printf("\n");
						}
						printf("----------------------\n");
					 break;
					 
		}
		
		
		
	}
	
}
