#include<stdio.h>
int pattern0()
{
    int i,j,k,n=5;
    for (i = 1; i <= n; i++)
    {
        for(j=0;j<=i-1;j++)
        {
            printf("\t");
        }
        for(k=i;k<=n;k++)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
    
}
int main()
{
    pattern0();
}