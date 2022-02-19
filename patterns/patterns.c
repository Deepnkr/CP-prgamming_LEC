#include<stdio.h>
int main()
{
    int i, j, row=4, colm=4;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=colm; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}