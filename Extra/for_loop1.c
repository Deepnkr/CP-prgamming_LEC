// wap to print 5 4 3 2 1
//                4 3 2 1
//                  3 2 1
//                    2 1
//                      1  
#include<stdio.h>
void pattern1()
{
    int i,j;
    for ( i = 5; i >=1; i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
}