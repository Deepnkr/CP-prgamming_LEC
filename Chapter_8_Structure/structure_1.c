//WAP to print name and citizenship number of 2 person using structure
#include<stdio.h>
#include<string.h>

struct Person {
  char name[50];
  int citNo;
}
person1,person2;
int main() 
{
  strcpy(person1.name, "Deepankar");
  printf("Name:%s\n",person1.name);
  person1.citNo = 123456789;
  printf("citizen ship no = %d\n",person1.citNo);
  printf("\n");
  strcpy(person2.name, "Amit Marajan");
  printf("name:%s\n",person2.name);
  person2.citNo = 234567;
  printf("citizen ship no = %d",person2.citNo);



}