#include<stdio.h>
#include<math.h>
int Loan_intrest()
{
    float Amount, Intrest, Total, Monthly_Amt, Amt_given, Penalty, Amount_refund,
    Amt_with_penalty, Amount_to_give, Amount_2, Amount_3, Amount_4, Amt_given_2,a,c,d=0;
    printf("\nEnter How much loan do u wanna take from Deep finance Annualy:");
    scanf("%f",&Amount);
    printf("\n");
    printf("Intrest rate will be 18 Percent\n");
    Intrest = Amount/100*18; 
    Total = Intrest + Amount;
    Monthly_Amt = Total/12;
    printf("Amount of Money U need to pay is %f per month\n",Monthly_Amt);
    for(int i = 1; i<=12; i++)
    {
        printf("\nEnter the amount for %dth Month : ",i);
        scanf("%f",&Amt_given);
        a= c +Amt_given;
        Amt_given =  d + a;
    }
    printf("%f",Amt_given);
    if(Amt_given>=1)
    {
        if(Amt_given == Total)
        {
            printf("\n\nYour Loan has been Cleared.");
        }
        else
        {
            printf("\n\nYour loan has not been cleared.");
        }
    }
    if(Amt_given<Total)
    {
        printf("\nSince your loan has not been cleared u will get 2 percent extra chargeon your remaining loan.");
        Penalty = Amt_given/100*2;
        Amt_with_penalty = Amt_given + Penalty;
        Amount_to_give = Amt_with_penalty/100*30;
        printf("\nYour Penalty amt is %f\nYour total lon amt to pay with penalty is %f.\n",Penalty,Amt_with_penalty);
        printf("For renew your loan You need to pay 30 percent of remaining Amt with pleanaty that is %f\n",Amount_to_give);
        printf("Deposit 30 pecent amount =");
        scanf("%f",&Amount_2);
        if(Amount_2==Amount_to_give)
        {
            printf("Thankyou for Depositing th Amount.\n");
            Amount_3 = Amt_with_penalty - Amount_2;
            printf("Your new loan remains is %f\n",Amount_3);
            Amount_4 = Amount_3/12;
            printf("Amount u need to pay per month to clear the loan is %f",Amount_4);
            for(int j = 1; j<=12; j++)
            {
                printf("\nEnter the amount for %dth Month : ",j);
                scanf("%f",&Amt_given_2);
            }
            if(Amt_given_2>=1)
            {
                if(Amt_given_2==Amount_4)
                {
                    printf("\nYou have clearred the loan.");
                }
                else{
                    printf("\nyou have still not cleared the loan.");
                }
            }
        }
    }
}
int main()
{
    Loan_intrest();
}