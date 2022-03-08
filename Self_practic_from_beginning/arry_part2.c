#include<stdio.h>
int main()
{
    int x[2][7],i,j;
    for(i=0; i<2;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("enter the temp =[%d][%d] ",i,j);
            scanf("%d",&x[i][j]);

        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("\nthe temp are %d",x[i][j]);
        }
        printf("\n");
    }
}