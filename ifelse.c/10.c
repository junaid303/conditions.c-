#include<stdio.h>
int main()
{
    int maths, physics, chemistry, programming,total,avg;
    printf("Enter maths marks ; \n");
    scanf("%d",&maths);
    printf("\n Enter physics marks : ");
    scanf("%d",&physics);
    printf("\n Enter chemistry marks : ");
    scanf("%d",&chemistry);
    printf("\n Enter programming : ");
    scanf("%d",&programming);
    total = maths + physics + chemistry + programming;
    avg = total/4;
    printf("\n Total = %d/400",total);
    printf("\n Average : %d",avg);
    if(avg > 75)
    {
        printf("\nResult : Distinction");
    }
    else if(avg >=60 && avg <75)
    {
        printf("\n Result : below Distinction");
    }
    else if(avg >=50 && avg <60)
    {
        printf("\nResult :  Good");
    }
    else
    {
        printf("\n Result : Fail ");
    }
    return 0;
}