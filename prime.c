#include <stdio.h>

int main(void) 
{
    int num;
    scanf("%d", &num);
    num++;
    while((num%2 == 0) || (num%3 == 0))
    {
        if((num%2 == 0) || (num%3 == 0))
        {
            num+=1;
        }
    }
    printf("%d", num);
    
	return 0;
}
