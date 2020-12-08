/*C program to check whether a number is Strong number or not*/

#include <stdio.h>
int main()
{
    int i,N,num,last_digit,sum=0;
    long fact;

    //Input from user.
    printf("Enter Number....");
    scanf("%d", &num);

    //Taking a copy of the number.
    N=num;

    //Sum of factorial of digits.
    while(num>0)
    {
        //Last Digit
        last_digit=num%10;

        //Factorial of the Last Digit
        fact=1;
        for(i=1;i<=last_digit;i++)
        {
            fact*=i;
        }
        
        //Adding Factorial of the Number
        sum+=fact;
        num/=10;
    }

    //Condition for Strong Number
    if(sum==N)
    {
        printf("%d is 'Strong Number'",N);
    }
    else
    {
        printf("%d is 'Not Strong Number'",N);
    }

    return 0;
}
