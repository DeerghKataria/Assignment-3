/*C Program to Calculate Grade and Percentage*/
#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    //Input of Marks from the User.
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);


    /?Calculating Percentage
    per=(phy+chem+bio+math+comp)/5.0;

    printf("Percentage=%.2f\n",per);


    //For Grade
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
