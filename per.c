#include<stdio.h>
int permu(char wod[]);
void main()
{
	char word[30];
	gets(word);
	permu(word);
	
}
int permu(char wod[])
{
	int i,j,k,count=1,num=0;
	for(i=0;i<strlen(wod);i++)
	{
		count=1;
		for(j=i+1;j<strlen(wod);j++)
		{
			if(wod[i]==wod[j])
			{
				++count;
				for(k=j;k<strlen(wod);k++)
				{
					wod[k]=wod[k+1];
				}
			}
		}
		if((count%2)!=0)
		{
			num++;
		}
		if(num>=2)
		{
			printf("false");
			return 0;
		}
		
	}
	printf("true");
	
}
