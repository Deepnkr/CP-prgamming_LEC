#include<stdio.h>
void Multiplication(int row, int column)
{
    int i,j;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=column; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }

}
void triangleNumber(int n)
{
   int i,j,num=1;
   for(i=1; num<=n; i++)
   {
       for(j=1; j<=i; j++)
       {
            printf("%3d",num);
            num++;
       }
       printf("\n");
   }

}
int main()
{
    triangleNumber(6);
}