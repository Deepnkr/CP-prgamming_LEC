#include<stdio.h>
int main()
{
    int x[2][2],i,j,y[2][2],k,l;
    for(i=0; i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the temp =[%d][%d] ",i,j);
            scanf("%d",&x[i][j]);

        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("\nthe temp are %d",y[k][l]);
        }
    }
    printf("\n");
    for(k=0; k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("enter the temp =[%d][%d] ",k,l);
            scanf("%d",&y[k][l]);

        }

    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("\nthe temp are %d",y[k][l]);
        }
        printf("\n");
    }
}