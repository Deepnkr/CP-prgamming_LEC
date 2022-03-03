//wap to print 1  2 3 4 5
//                2 3 4 5
//                  3 4 5
//                    4 5
//                      5
#include<stdio.h>
int main()
{
    int n,k;
    printf("enter the num =");
    scanf("%d",&n);
    for ( int i = 1; i <=n; i++)
    {
       for(k=0;k<=i-1;k++)
        {
            printf("\t");
        }
            
        for(int j=i; j<=n; j++)
        {
            printf("%d\t ",j);
        }
        printf("\n");
    }
}