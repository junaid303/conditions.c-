#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter the digit : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("\n The entered alpha is Upper in lower it is : %c ",(ch+32));

    }
    else
    {
        printf("\nEntered alpha is in lower in upper it is : %c ",(ch-32));

    }
    return 0;


}