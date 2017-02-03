#include<stdio.h>
#include<conio.h>
void main()
{
	int n,x,p,a,q,i,j,temp,m,l=0;
	scanf("%d", &n);
	int arr[n][n];
	char ch;
	a=n*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[j][i]=l++;
		}
		
	}
	
	while( ch!= 'Q'&& ch!='q')
	{
			system("cls");
		for(p=0;p<n;p++)
		{
			for(x=0;x<a+4;x++)
			{
			printf("-");
			}
			printf("\n");
			for(q=0;q<n;q++)
			{ 
				if(arr[p][q]== 0)
				{
					i=p;
					j=q;
					printf("|   |");
				}
				else if(arr[p][q]<=9)
			     {
				 printf("| %d |", arr[p][q]);
			     }
			     else
			     {
			     	printf("| %d|", arr[p][q]);
				 }
			}
			printf(" \n ");
		}
		for(x=0;x<(a+4);x++)
		{
			printf("-");
		}
		printf("\n");
		l=1;
		int count=0;
		for(p=0;p<n;p++)
		{
			for(q=0;q<n;q++)
			{
				if(arr[p][q]== l++ || arr[p][q]==0)
				{
					count++;	
				}
				else
				{
					count=0;
					break;
				}
			}
			
		}
		

		printf("U->Up D->Down L->Left R->Right\n");
		printf("Enter the charecter\n");
		scanf("%c", &ch);
		if(count==a)
		{
			ch='q';
		}
		switch(ch)
		{
			case 'u':
			case 'U': m=(i+n-1)%n;
					  temp=arr[m][j];
					  arr[m][j]=arr[i][j];
					  arr[i][j]=temp;
					  i=m;
					  break;
		 	case 'd':
			case 'D': m=(i+1)%n;
					  temp=arr[m][j];
					  arr[m][j]=arr[i][j];
					  arr[i][j]=temp;
					  i=m;
					  break;
			case 'l':
			case 'L': m=(j+n-1)%n;
					  temp=arr[i][m];
					  arr[i][m]=arr[i][j];
					  arr[i][j]=temp;
					  j=m;
					  break;
			case 'r':
			case 'R': m=(j+1)%n;
					  temp=arr[i][m];
					  arr[i][m]=arr[i][j];
					  arr[i][j]=temp;
					  j=m;
					  break;
				  
		}
		
	}
}
