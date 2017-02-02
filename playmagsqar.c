#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,q,i,j,temp,m,l=1;
	scanf("%d", &n);
	char arr[n][n];
	char ch;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=l++;
			if(i==1&&j==2)
			{
				arr[i][j]=' ';
			}
		}
	}
	
	i=1;
	j=2;
	while( ch!= 'Q')
	{
			system("cls");
		for(p=0;p<n;p++)
		{
			printf("--------------------\n");
			for(q=0;q<n;q++)
			{ 
				if(arr[p][q]== ' ')
				{
					printf("| %c |", arr[p][q]);
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
		printf("-------------------\n");

	printf("U->Up D->Down L->Left R->Right\n");
	printf("Enter the charecter\n");
	scanf("%c", &ch);
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
