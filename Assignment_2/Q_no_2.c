//WAP to determine wheather a number is palindrome.
#include<stdio.h>
int main()
{
    int num,temp,rev,digit;
    printf("Enter any number = ");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(num==rev)
    {
        printf("It is palindrom");
    }
    else
    printf("it is not");
}