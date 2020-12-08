/*C program to print all Strong numbers between 1 to n.*/
#include <stdio.h>

int main()
{
    int i,j,num,last_digit,n;
    long int fact,sum;

    /* Input upper limit from user */
    printf("Enter the value of 'n'....");
    scanf("%d",&n);

    printf("Strong Numbers between 1 to %d are....\n",n);
    
    //Loop from '1' to 'n'.
    for(i=1;i<=n;i++)
    {
        //Number to check Strong Number.
        num=i;

        sum=0;

        //Sum for factorial of digits.
        while(num>0)
        {
            fact=1;
            last_digit=num%10;

            //Factorial of Last Digit.
            for(j=1;j<=last_digit;j++)
            {
                fact*=j;
            }

            sum+=fact; 

            num/=10;
        }
        
        //Condition for strong number.  
        if(sum==i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
