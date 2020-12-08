/*C program to find LCM of two numbers*/

#include <stdio.h>
int main()
{
    int num1,num2,max,lcm=1,i;

    //Taking input from the user.
    printf("Enter First Number....");
    scanf("%d",&num1);
    printf("Enter Second Number....");
    scanf("%d",&num2);

    //Finding maximum number of the two for the loop.
    max=(num1>num2)?num1:num2;

    //LCM is atleast the maximum of two numbers.
    i=max;
    
    for(int i=max;;i+=max)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is....%d",num1,num2,lcm);

    return 0;
}
