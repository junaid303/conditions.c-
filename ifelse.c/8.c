#include<stdio.h>
int main()
{
    float salary,amountToPay;
    char ch;
    
    printf("Enter the Sex m or f : ");
    scanf("%c",&ch);
    printf("Enter the Salary : ");
    scanf("%f", &salary);
    
    if(ch == 'm')
    amountToPay=salary+0.05*salary;
    else if(salary<10000)
    amountToPay=salary+0.07*salary;
    else
    amountToPay=salary+0.10*salary;
    printf("salary = %f",amountToPay);
    return 0;


    
}