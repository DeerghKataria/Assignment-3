/* C program to find HCF of two numbers*/

#include <stdio.h>
int main()
{
    int i,num1,num2,min,hcf=1;

    //Taking input from the user.
    printf("Enter First Number....");
    scanf("%d",&num1);
    printf("Enter First Number....");
    scanf("%d",&num2);
    
    // Minimum number for the loop to run
    min=(num1<num2)?num1:num2;

    for(i=1;i<=min;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            hcf=i;
        }
    }

    printf("HCF of %d and %d is....%d\n",num1,num2,hcf);

    return 0;
}
