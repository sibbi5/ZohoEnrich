#include <stdio.h>

int main(void) 
{
    int num,temp=0,i;
    scanf("%d", &num);
    num++;
    while(temp != 1)
    {
        temp=1;
        for(i=2;i<num/2;i++)
        {
            if(num%i == 0)
            {
                temp=0;
                num+=1;
                break;
            }
        }
        
    }
    printf("%d", num);
    
	return 0;
}
