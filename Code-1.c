/*C program to find power of a number using for loop*/

#include <stdio.h>

int main()
{
    int num,exp;
    long int power=1;
    int i;

    //Taking the input from the user.
    printf("Enter Number....");
    scanf("%d",&num);
    printf("Enter Exponent....");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++)
    {
        power*=num;
    }

    printf("%ld",power);
    return 0;
}
