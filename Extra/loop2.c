#include<stdio.h>
int main()
{
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
       
        for(j=i;j<=5;j++)
        {
            
            for(k=1; k<=j-1 ; k++)
                {
                    printf("0");
                }
            printf("%d ",j);    
        }
        printf("\n");
    }
}