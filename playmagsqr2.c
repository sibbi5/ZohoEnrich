#include<stdio.h>
#include<conio.h>
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
	
		
	while(charec != 'Q')
	{
		system("cls");
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
		printf("\n U->Up D->Down L->Left R->Right Q->Quit\n");
		printf("Enter a charecter\n");
		scanf("%c", &charec);
		switch(charec)
		{
			case 'L':temp=arr[i][j]; 
					arr[i][j]=arr[i][j-1];
					arr[i][j-1]=temp;
					  j--;
					 break;	
			case 'R': temp=arr[i][j]; 
			 arr[i][j]=arr[i][j+1];
			 arr[i][j+1]=temp;
					 j++;
					 break;
			case 'U': temp=arr[i][j]; 
			arr[i][j]=arr[i-1][j];
			arr[i-1][j]=temp;
					  i--;
					 break;
			case 'D': temp=arr[i][j]; 
			 arr[i][j]=arr[i+1][j];
			 arr[i+1][j]=temp;
					  i++;
					 break;
					 
		}
		
		
		
	}
	
}
