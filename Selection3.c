#include <stdio.h>

int main()
{
    int Standard =0;
    printf("Primary School Portal\n");

    printf("Enter your Standard : \n");
    scanf("%d", &Standard);

    switch(Standard)
    {
        case 1:
            printf("Your exam is at 1.00PM\n");
            break;
        case 2:
            printf("Your exam is at 2.00PM\n");
            break;
        case 3:
            printf("Your exam is at 3.00PM\n");
            break;
        case 4:
            printf("Your exam is at 4.00PM\n");
            break;
        default:
            printf("Invalid Standard\n");
            break;
    }
    return 0;
}