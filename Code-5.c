/*C program to find all prime factors of a number*/

#include <stdio.h>
int main()
{
    int i,j,num,Prime;

    //Taking input from the user.
    printf("Enter Number....");
    scanf("%d",&num);

    printf("All Prime Factors of %d\n",num);

    //Finding all the Prime Numbers.
    for(i=2;i<=num;i++)
    {
        //If 'i' is factor of Number.
        if(num%i==0)
        {
            Prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    Prime = 0;
                    break;
                }
            }

            //Condition if 'i' is Prime number and factor of Number.
            if(Prime==1)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
