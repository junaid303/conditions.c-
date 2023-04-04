#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z')
    printf("lower case it is : %c", (ch+32));
    else
    printf("\n  upper case it case : %c", (ch-32));
    return 0;
}