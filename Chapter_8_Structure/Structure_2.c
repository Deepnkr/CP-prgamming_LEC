#include<stdio.h>
#include<string.h>

struct Person {
  char name[50];
  int citNo;
}
person1,person2;
int main() 
{
  printf("Enter name = ");
  scanf("%s",&person1.name);
  printf("Name:%s\n",person1.name);
  person1.citNo = 123456789;
  printf("citizen ship no = %d\n",person1.citNo);
  printf("\n");
   printf("Enter name = ");
  scanf("%s",&person2.name);
  printf("name:%s\n",person2.name);
  person2.citNo = 234567;
  printf("citizen ship no = %d",person2.citNo);
}