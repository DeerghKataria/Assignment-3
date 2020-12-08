/*C program to find all factors of a number*/

#include <stdio.h>
int main()
{
    int num,i;

    //Taking the input from the user.
    printf("Enter Number....");
    scanf("%d",&num);

    printf("All Factors of %d are....\n", num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
