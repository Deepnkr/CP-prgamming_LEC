#include<stdio.h>
#include<math.h>
int A() //Program for adding 2 number.
{
    float A1, B1, Ans;
    printf("\nEnter 2 numbers : ");
    scanf("%f%f",&A1,&B1);
    printf("\n");
    Ans = A1 + B1;
    printf("Sum of those 2 numbers are : %f\n\n\n\n",Ans);
    return 0;
}
int B() //Program for adding 3 number.
{
    float A1, B1, C1, Ans;
    printf("\nEnter 3 numbers : ");
    scanf("%f%f%f",&A1,&B1,&C1);
    printf("\n");
    Ans = A1 + B1 + C1;
    printf("Sum of those 3 numbers are : %f\n\n\n\n",Ans);
}
int C() //Program for adding 4 number.
{
    float A1, B1, C1, D1, Ans;
    printf("\nEnter 4 numbers : ");
    scanf("%f%f%f%f",&A1,&B1,&C1,&D1);
    printf("\n");
    Ans = A1 + B1 + C1 + D1;
    printf("Sum of those 4 numbers are : %f\n\n\n\n",Ans);
}
int Add()  //For Addition program.
{
    int a, b, c, d;
    printf("\nHow many do u wanna add?\n");
    printf("Amount of numbers U can add are 2, 3, 4.\n");
    printf("for 2 enter 2.\nfor 3 enter 3.\nfor 4 enter 4.\n");
    printf("Enter Number : ");
    scanf("%d",&d);
    if(d>=0)
    {
        if(d==2)
        {
            A();
        }
        else if(d==3)
        {
            B();
        }
        else if(d==4)
        {
            C();
        }
    }
    else{
        printf("Your Entered Number is Wrong:\n\n\n\n");
    }
}
int A_subtract() //Program for Subtracting 2 number.
{
    float a, b, Sub;
    printf("\nEnter 2 numbers u wanna subtract :");
    scanf("%f%f",&a,&b);
    Sub = a - b;
    printf("\n");
    printf("Answer = %f\n\n\n\n",Sub);
}
int B_subtract() //Program for Subtracting 3 number.
{
    float a, b, c, Sub;
    printf("\nEnter 3 numbers u wanna subtract :");
    scanf("%f%f%f",&a,&b,&c);
    Sub = a - b - c;
    printf("\n");
    printf("Answer = %f\n\n\n\n",Sub);
}
int C_subtract() //Program for Subtracting 4 number.
{
    float a, b, c, d, Sub;
    printf("\nEnter 4 numbers u wanna subtract :");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    Sub = a - b - c - d;
    printf("\n");
    printf("Answer = %f\n\n\n\n",Sub);
}
int Sub() //For Subtraction Program.
{
    int a, b, c, d;
    printf("\nHow many do u wanna subtract?\n");
    printf("Amount of numbers U can subtract are 2, 3, 4.\n");
    printf("for 2 enter 2.\nfor 3 enter 3.\nfor 4 enter 4.\n");
    printf("Enter Number : ");
    scanf("%d",&d);
    if(d>=0)
    {
        if(d==2)
        {
            A_subtract();
        }
        else if(d==3)
        {
            B_subtract();
        }
        else if(d==4)
        {
            C_subtract();
        }
        else{
            printf("Your Entered Number is Wrong:\n\n\n\n");
        }
    }
}
int A_Multipation()//Program for Multipy 2 number.
{
    float A1, B1, Ans;
    printf("\nEnter 2 numbers : ");
    scanf("%f%f",&A1,&B1);
    printf("\n");
    Ans = A1 * B1;
    printf("Mult of those 2 numbers are : %f\n\n\n\n",Ans);
    return 0;
}
int B_Multipation()//Program for Multipy 3 number.
{
    float A1, B1, C1, Ans;
    printf("\nEnter 3 numbers : ");
    scanf("%f%f%f",&A1,&B1,&C1);
    printf("\n");
    Ans = A1 * B1 * C1;
    printf("Mult of those 3 numbers are : %f\n\n\n\n",Ans);
}
int C_Multipation()//Program for Multipy 4 number.
{
    float A1, B1, C1, D1, Ans;
    printf("\nEnter 4 numbers : ");
    scanf("%f%f%f%f",&A1,&B1,&C1,&D1);
    printf("\n");
    Ans = A1 * B1 * C1 * D1;
    printf("Mult of those 4 numbers are : %f\n\n\n\n",Ans);
}
int Mult()//For Multipation Program.
{
    int  d;
    printf("\nHow many do u wanna Mulitpy?\n");
    printf("Amount of numbers U can Multipy are 2, 3, 4.\n");
    printf("for 2 enter 2.\nfor 3 enter 3.\nfor 4 enter 4.\n");
    printf("Enter Number : ");
    scanf("%d",&d);
    if(d>=0)
    {
        if(d==2)
        {
            A_Multipation();
        }
        else if(d==3)
        {
            B_Multipation();
        }
        else if(d==4)
        {
            C_Multipation();
        }
        else{
            printf("Your Entered Number is Wrong:\n\n\n\n");
        }
    }
}
int A_Divide()//Program for Divide 2 number.
{
    float a, b, Div;
    printf("\nEnter any 2 numbers  wanna Divide:");
    scanf("%f%f",&a,&b);
    Div = a / b;
    printf("\nYour Answer is = %f\n\n",Div);
}
int B_Divide()//Program for Divide 3 number.
{
    float a, b, c, Div;
    printf("\nEnter any 3 numbers  wanna Divide:");
    scanf("%f%f%f",&a,&b,&c);
    Div = a / b / c;
    printf("\nYour Answer is = %f\n\n",Div);
}
int C_Divide()//Program for Divide 4 number.
{
    float a, b, c, d, Div;
    printf("\nEnter any 4 numbers  wanna Divide:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    Div = a / b / c / d;
    printf("\nYour Answer is = %f\n\n",Div);
}
int Div()//For Dividing Program.
{
    int  d;
    printf("\nHow many do u wanna Divide?\n");
    printf("Amount of numbers U can Divide are 2, 3, 4.\n");
    printf("for 2 enter 2.\nfor 3 enter 3.\nfor 4 enter 4.\n");
    printf("Enter Number : ");
    scanf("%d",&d);
    if(d>=0)
    {
        if(d==2)
        {
            A_Divide();
        }
        else if(d==3)
        {
            B_Divide();
        }
        else if(d==4)
        {
            C_Divide();
        }
        else{
            printf("Your Entered Number is Wrong:\n\n\n");
        }
    }
}
int main()//Main peogram to run all Calculator.
{
    int n,j=100;
    for(int i = 1; i<=j; i++)
    {
        printf("\nThis is a normal calculator which can take upto 4 digit number to calcuate\n\n");
        printf("Enter '1' if u wanna ADD\nEnter '2' if u wanna SUB\nEnter '3' if u wanna MULT\n");
        printf("Enter '4' if u wanna Divide:");
        scanf("%d",&n);
        if(n>=0)
        {
            if(n==1)
            {
                Add();
            }
            else if(n==2)
            {
                Sub();
            }
            else if(n==3)
            {
                Mult();
            }
            else if(n==4)
            {
                Div();
            }
            else
            {
                printf("Your entered nuber is wrong");
            }
        }
    }
     //Add();
     //Sub();
     //Mult();
}