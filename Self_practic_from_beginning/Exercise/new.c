#include<stdio.h>
int main()
{
    int h=5;
    for ( int i = 1; i < h; i++)

    {
        for ( int j = i; j < h; j++)
        {
            printf("*\t");
        }
        for ( int j = 1; j < i; j--)
        {
            printf("*\t");
        }
    printf("\n");
    }
    
}