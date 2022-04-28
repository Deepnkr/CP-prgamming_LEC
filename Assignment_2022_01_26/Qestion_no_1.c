// Wap to calculate the volm of pool by using function and already given value(25, 10 , 6).

#include<stdio.h>
int volume_of_pool(int l,int w,int d)
{
    int c;
    c = l*w*d;
    return c;
}
int main()
{
    printf("The volumn of pool is = %d",volume_of_pool(25,10,6));
}