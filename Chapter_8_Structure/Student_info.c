//name roll no age section marks of six subj and avg marks.

#include<stdio.h>
#include<string.h>

struct student 
{
    char name[30];
    char section[5];
    float micro_processor;
    float English;
    float C_programming;
    float Math;
    float Account;
}s1;

void main()
{
    int i,n;
    float sum = 0, avg = 0;

    printf("\nEnter the number of students of whome you want to calculate: \n");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter the name of the student[%d]: \n",i);
        scanf("%s",s1.name);

        printf("Enter section of student[%d]: \n",i);
        scanf("%s",s1.section);

        printf("Enter the number in subject Micro Processor: \n");
        scanf("%f",&s1.micro_processor);

        printf("Enter the number in subject English: \n");
        scanf("%f",&s1.English);

        printf("Enter the number in subject C programming: \n");
        scanf("%f",&s1.C_programming);

        printf("Enter the number in subject Math: \n");
        scanf("%f",&s1.Math);

        printf("Enter the number in subject Account: \n");
        scanf("%f",&s1.Account);

        sum = sum + s1.micro_processor + s1.Account + s1.C_programming + s1.English + s1.Math;  
        avg = avg +(s1.micro_processor + s1.Account + s1.C_programming + s1.English + s1.Math)/n;
    }

    for(i = 1; i <= n; i++)
    {
        printf("\nThe name of student[%d] is %s\n",i,s1.name);
        printf("The section of [%s] is: %s\n",s1.name,s1.section);
        printf("Marks obtained in Micro Processor is: %f\n",s1.micro_processor);
        printf("Marks obtained in English is: %f\n",s1.English);
        printf("Marks obtained in C Programming is: %f\n",s1.C_programming);
        printf("Marks obtained in Math is: %f\n",s1.Math);
        printf("Marks obtained in Account is: %f\n",s1.Account);   
    }
    printf("The sum of marks of all students is: %f\n",sum);
    printf("The average of all student is: %f\n",avg);
}
