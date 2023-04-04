#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int option;
    char decision;
    while (1)
    {
        printf("-----------------------\n");
        printf("Welcome to Matrix Cli App \n");
        printf("-----------------------\n");
        printf("-------MENU OPTIONS-------\n");
        printf("Press 0 to Exit\n");
        printf("Press 1 to Extract Left Diagonal from the input Square Matrix\n");
        printf("Press 2 to Extract Right Diagonal from the input Square Matrix\n");
        printf("Press 3 to Check Diagonal Diffrence from the input Square Matrix\n");
        printf("Press 4 to Check Diagonal Matrix from the input Square Matrix\n");
        printf("Press 5 to Check Null Matrix from the input Square Matrix\n");
        printf("Enter your Option : ");
        scanf("%d", &option);
        switch(option)
        {
        case 0:
            
            exit(0);
            break;

        case 1:
            printf("Left Diagonal Block\n");
            break;

        case 2:
            printf("Right Diagonal Block\n");
            break;

        case 3:
            printf("Diagonal Difference Block\n");
            break;

        case 4:
            printf("Diagonal Matrix Block\n");
            break;

        case 5:
            printf("Null Matrix Block\n");
            break;

            default:
            printf("Invalid Input. Try Again\n");
        }
        printf("Do you want to Continue : (Y/N) ");
        scanf(" %c", &decision);
        if (decision == 'n' || decision == 'N')
        {
            printf("Bye................\n");
            exit(0);
        }
        
    }

    return 0;
}
void leftDiagonal(void)
{
    int matrixSize;
    printf("Enter Matrix Dimensions : ");
    scanf("%d", &matrixSize);

    int matrix[matrixSize][matrixSize];

    for(int i=0; i < matrixSize; i++)
    {
        for(int j=0; j<matrixSize; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Printing Matrix 
    printf("\n\n The Entered Square Matrix is: \n");
    for(int i = 0; i<matrixSize; i++)
    {
        for(int j = 0; j<matrixSize;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
}