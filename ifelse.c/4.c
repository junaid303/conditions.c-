#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    if(num%2==0)
    printf("\n %d is an even ", num);
    else
    printf("\n %d is an odd ", num);
    return 0;
}